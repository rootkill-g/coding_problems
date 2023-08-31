use std::{
    io::{self, prelude::*},
    str,
};

struct Scanner<R> {
    reader: R,
    buf_str: Vec<u8>,
    buf_iter: str::SplitWhitespace<'static>,
}

impl<R: BufRead> Scanner<R> {
    fn new(reader: R) -> Self {
        Self {
            reader,
            buf_str: vec![],
            buf_iter: "".split_whitespace(),
        }
    }

    fn token<T: str::FromStr>(&mut self) -> T {
        loop {
            if let Some(token) = self.buf_iter.next() {
                return token.parse().ok().expect("Failed parse");
            }
            self.buf_str.clear();
            self.reader
                .read_until(b'\n', &mut self.buf_str)
                .expect("Failed read");
            self.buf_iter = unsafe {
                let slice = str::from_utf8_unchecked(&self.buf_str);
                std::mem::transmute(slice.split_whitespace())
            }
        }
    }
}

fn solve<R: BufRead, W: Write>(scan: &mut Scanner<R>, w: &mut W) {
    let t: usize = scan.token();

    for _ in 0..t {
        let a: usize = scan.token(); // Polycarp to feel refreshed
        let b: usize = scan.token(); // First Alarm to go off
        let c: usize = scan.token(); // Time before succeeding alarm goes off
        let d: usize = scan.token(); // Time Polycarp spends to fall asleep

        if b >= a {
            writeln!(w, "{}", b).ok();
        } else {
            if c <= d {
                writeln!(w, "-1").ok();
            } else {
                let net = a - b;
                let z = c - d;
                let mut q = net / z;

                if net % z != 0 {
                    q += 1;
                }

                writeln!(w, "{}", b + q * c).ok();
            }
        }
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
