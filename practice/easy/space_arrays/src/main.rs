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
    let t: usize = scan.token();

    for _ in 0..t {
        let n: usize = scan.token();
        let mut a: Vec<usize> = (0..n).map(|_| scan.token()).collect();
        a.sort();

        let mut idx: usize = 0;
        let mut s: usize = 0;

        for i in 0..n {
            if a[i] <= i + 1 {
                s += i + 1 - a[i];
                idx = i;
            } else {
                break;
            }
        }

        if idx < n - 1 || s % 2 == 0 {
            writeln!(w, "Second").ok();
        } else {
            writeln!(w, "First").ok();
        }
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
