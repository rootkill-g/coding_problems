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

fn sieve_of_eratosthenes(n: usize) -> Vec<usize> {
    let mut primesb: Vec<bool> = vec![true; n + 1];
    let mut p: usize = 2;
    primesb[0] = false;
    primesb[1] = false;

    while p * p <= n {
        if primesb[p] == true {
            for mut _j in (p * p)..(n + 1) {
                primesb[_j] = false;
                _j += p;
            }
        }

        p += 1;
    }

    let mut primes: Vec<usize> = Vec::new();

    for i in 2..n {
        if primesb[i] == true {
            primes.push(i);
        }
    }

    primes
}

fn solve<R: BufRead, W: Write>(scan: &mut Scanner<R>, w: &mut W) {
    let primes: Vec<usize> = sieve_of_eratosthenes(4_000_000);
    let t: usize = scan.token();

    for _ in 0..t {
        let n: usize = scan.token();
        let b: Vec<usize> = (0..n).map(|_| scan.token()).collect();
        let mut ans: Vec<usize> = vec![0usize; n];
        let mut map: HashMap<usize, usize> = HashMap::new();

        for i in 0..n {
            let e = b[i];

            if map.contains_key(&e) {
                ans[i] = map[&e];
            } else {
                ans[i] = primes[i];
                map.insert(e, ans[i]);
            }
        }

        for i in 0..ans.len() {
            write!(w, "{} ", ans[i]).ok();
        }
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
