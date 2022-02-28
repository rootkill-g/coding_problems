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
    let t = scan.token::<usize>();

    for _ in 0..t {
        let n: usize = scan.token();
        let a: usize = scan.token();
        let b: usize = scan.token();
        let ar: Vec<usize> = (0..n).map(|_| scan.token::<usize>()).collect();
        let mut bob_c: usize = 0;
        let mut alice_c: usize = 0;
        let mut comm: usize = 0;

        for (_, v) in ar.iter().enumerate() {
            if v % a == 0 && v % b == 0 {
                comm += 1;
            } else if v % a == 0 {
                bob_c += 1;
            } else if v % b == 0 {
                alice_c += 1;
            }
        }

        if comm > 0 {
            bob_c += 1;
        }

        if bob_c > alice_c {
            writeln!(w, "BOB").ok();
        } else {
            writeln!(w, "ALICE").ok();
        }
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
