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
    let t: u8 = scan.token();
    for _ in 0..t {
        let a: String = scan.token();
        let b: String = scan.token();
        let mut x: Vec<u8> = vec![0; 26];

        for i in 0..a.len() {
            x[a.chars().nth(i).unwrap() as usize - 97] += 1;
        }

        for i in 0..b.len() {
            x[b.chars().nth(i).unwrap() as usize - 97] += 1;
        }

        let n: u16 = scan.token();
        let mut flag: bool = true;
        let mut y: String = String::new();
        let mut s: String;

        for _ in 0..n {
            s = scan.token();
            y = format!("{}{}", y, s);
        }

        for i in 0..y.len() {
            if x[y.chars().nth(i).expect("not a char") as usize - 97] > 0 {
                x[y.chars().nth(i).expect("not a char") as usize - 97] -= 1;
            } else {
                flag = false;
                break;
            }
        }

        if flag {
            writeln!(w, "YES").ok();
        } else {
            writeln!(w, "NO").ok();
        }
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
