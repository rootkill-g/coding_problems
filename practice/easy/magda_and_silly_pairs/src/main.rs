use std::io;
use std::io::prelude::*;
use std::str;

struct Scanner<R> {
    reader: R,
    buf_str: Vec<u8>,
    buf_iter: str::SplitWhitespace<'static>,
}

impl<R: BufRead> Scanner<R> {
    fn new(reader: R) -> Scanner<R> {
        Scanner {
            reader: reader,
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
    let t: u64 = scan.token();

    for _ in 0..t {
        let n: u64 = scan.token();
        let mut h: i64 = 0;
        let mut a: i64 = 0;
        let mut b: i64 = 0;

        for _ in 0..n {
            let ip: i64 = scan.token();

            if ip % 2 == 0 {
                a += 1;
            }

            h += ip;
        }

        for _ in 0..n {
            let ip: i64 = scan.token();

            if ip % 2 == 0 {
                b += 1;
            }

            h += ip;
        }

        writeln!(w, "{}", (h - (a - b).abs()) / 2).ok();
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
