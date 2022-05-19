use std::io;
use std::io::prelude::*;
use std::str;

const MAX_PRIME: usize = 1_000_000;

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

fn sieve(prime: &mut [bool]) {
    prime[0] = false;
    prime[1] = false;
    let mut _i: usize = 0;

    for p in 2..MAX_PRIME {
        if p * p > MAX_PRIME {
            break;
        } else {
            if prime[p] == true {
                _i = p * p;
                loop {
                    if _i > MAX_PRIME {
                        break;
                    } else {
                        prime[_i] = false;

                        _i += p;
                    }
                }
            }
        }
    }
}

fn solve<R: BufRead, W: Write>(scan: &mut Scanner<R>, w: &mut W, prime: &Vec<bool>) {
    let t: usize = scan.token();
    for _ in 0..t {
        let m: usize = scan.token();
        let n: usize = scan.token();

        for i in m..n + 1 {
            if prime[i] == true {
                writeln!(w, "{} ", i).ok();
            } else {
                continue;
            }
        }

        writeln!(w).ok();
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());
    let mut prime = vec![true; MAX_PRIME + 1];
    sieve(&mut prime);

    solve(&mut scan, &mut out, &prime);
}
