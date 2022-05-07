use std::io;
use std::io::prelude::*;
use std::str;

const MOD: usize = 1_000_000_007;
const MAX: usize = 100_005;

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

fn preset(ans: &mut Vec<usize>) {
    ans[1] = 1;

    for i in 2..MAX {
        ans[i] = (&ans[i - 1] * 2) % MOD;
    }
}

fn solve<R: BufRead, W: Write>(scan: &mut Scanner<R>, w: &mut W, ans: &Vec<usize>) {
    let t: usize = scan.token();
    for _ in 0..t {
        let n: usize = scan.token();
        writeln!(w, "{}", &ans[n]).ok();
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());
    let mut ans: Vec<usize> = vec![0; MAX];
    preset(&mut ans);

    solve(&mut scan, &mut out, &ans);
}
