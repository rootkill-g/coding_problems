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
    let n: usize = scan.token();

    for _ in 0..n {
        let x1: String = scan.token();
        let p1: usize = scan.token();
        let x2: String = scan.token();
        let p2: usize = scan.token();
        let mut l1: usize = x1.len();
        let mut l2: usize = x2.len();
        let mut x_1: usize = x1.parse().unwrap();
        let mut x_2: usize = x2.parse().unwrap();

        if x1.len() + p1 > x2.len() + p2 {
            writeln!(w, ">").ok();
        } else if x1.len() + p1 < x2.len() + p2 {
            writeln!(w, "<").ok();
        } else {
            while l1 < l2 {
                x_1 *= 10;
                l1 += 1;
            }

            while l2 < l1 {
                x_2 *= 10;
                l2 += 1;
            }

            if x_1 > x_2 {
                writeln!(w, ">").ok();
            } else if x_1 < x_2 {
                writeln!(w, "<").ok();
            } else {
                writeln!(w, "=").ok();
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
