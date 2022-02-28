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
    let t: isize = scan.token();

    for _ in 0..t {
        let n: usize = scan.token();
        let m: isize = scan.token();
        let k: isize = scan.token();
        let l: isize = scan.token();
        let r: isize = scan.token();
        let mut c: Vec<isize> = Vec::with_capacity(n);
        let mut p: Vec<isize> = Vec::with_capacity(n);
        let mut min_i: isize = isize::max_value();

        for i in 0..n {
            let c_i: isize = scan.token();
            let p_i: isize = scan.token();
            c.push(c_i);
            p.push(p_i);

            if (c[i] - k).abs() <= m {
                c[i] = k;
            } else if c[i] > k {
                c[i] -= m;
            } else {
                c[i] += m;
            }

            if l <= c[i] && c[i] <= r {
                min_i = std::cmp::min(min_i, p[i]);
            }
        }

        if min_i == isize::max_value() {
            min_i = -1;
        }

        writeln!(w, "{}", min_i).ok();
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
