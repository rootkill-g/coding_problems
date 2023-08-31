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

fn fibb() -> Vec<usize> {
    let max = 1_000_000_000;
    let mut fibb = vec![0usize, 1usize];

    while fibb[fibb.len() - 1] < max {
        let next = fibb[fibb.len() - 1] + fibb[fibb.len() - 2];
        fibb.push(next);
    }

    fibb
}

fn solve<R: BufRead, W: Write>(fib: Vec<usize>, scan: &mut Scanner<R>, w: &mut W) {
    let n: usize = scan.token();
    let mut found: bool = false;
    let l = fib.len();

    for i in 0..l {
        for j in i..l {
            for k in j..l {
                if fib[i] + fib[j] + fib[k] == n {
                    writeln!(w, "{} {} {}", fib[i], fib[j], fib[k]).ok();
                    found = true;
                    break;
                }
            }

            if found {
                break;
            }
        }

        if found {
            break;
        }
    }

    if !found {
        writeln!(w, "I'm too stupid to solve this problem").ok();
    }


}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());
    let fib = fibb();

    solve(fib, &mut scan, &mut out);
}
