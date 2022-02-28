use std::cmp;
use std::collections::HashMap;
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
        let mut m: HashMap<usize, usize> = HashMap::new();

        for _ in 0..n {
            let temp: usize = scan.token();
            if m.contains_key(&temp) {
                let mut x = m[&temp];
                x += 1;
                m.insert(temp, x);
            } else {
                m.insert(temp, 1);
            }
        }

        let mut ans: usize = n;
        let mut c: usize = 0;

        for (_, v) in &m {
            ans = cmp::min(ans, n - v);
            c += 1;
        }

        if c >= 2 {
            ans = cmp::min(ans, n - 2);
        }

        writeln!(w, "{}", ans).ok();
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
