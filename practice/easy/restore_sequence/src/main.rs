use std::io;
use std::io::prelude::*;
use std::str;

const MAX: usize = 4_000_000;

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

fn sieve_of_eratosthenes() -> Vec<usize> {
    let mut b: Vec<bool> = vec![false; MAX];
    let mut p: usize = 3;
    b[2] = true;
    let mut i: usize = 3;

    while i < MAX {
        b[i] = true;
        i += 2;
    }

    while p * p < MAX {
        if b[p] {
            let mut j = p * p;
            while j < MAX {
                b[j] = false;
                j += 2 * p;
            }
        }

        p += 2;
    }

    let mut primes: Vec<usize> = Vec::new();
    primes.push(2);
    let mut i: usize = 3;
    while i < MAX {
        if b[i] {
            primes.push(i);
        }

        i += 2
    }

    primes
}

fn solve<R: BufRead, W: Write>(scan: &mut Scanner<R>, w: &mut W) {
    let primes: Vec<usize> = sieve_of_eratosthenes();
    let t: usize = scan.token();

    for _ in 0..t {
        let n: usize = scan.token();

        for _ in 0..n {
            let x: usize = scan.token();
            write!(w, "{} ", primes[x - 1]).ok();
        }

        writeln!(w, "").ok();
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
