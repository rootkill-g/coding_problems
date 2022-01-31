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

fn abs(num1: isize, num2: isize) -> isize {
    if num1 - num2 < 0 {
        (num1 - num2) * -1
    } else {
        num1 - num2
    }
}

fn solve<R: BufRead, W: Write>(scan: &mut Scanner<R>, w: &mut W) {
    let t = scan.token::<isize>();

    for _ in 0..t {
        let n = scan.token::<isize>();
        let mut a: Vec<isize> = Vec::new();

        for _ in 0..n {
            let temp = scan.token::<isize>();
            a.push(temp);
        }

        if a.len() < 2 {
            writeln!(w, "YES").ok();
            continue;
        }

        a.sort();
        let mut v: Vec<isize> = Vec::new();

        for i in 1..a.len() {
            let diff = abs(a[i], a[i - 1]);
            v.push(diff);
        }

        v.sort_by(|a, b| b.cmp(a));

        if v[0] > 1 {
            writeln!(w, "NO").ok();
        } else {
            writeln!(w, "YES").ok();
        }
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
