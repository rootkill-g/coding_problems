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

fn solve<R: BufRead, W: Write>(scan: &mut Scanner<R>, w: &mut W) {
    let n = scan.token::<usize>();
    let m = scan.token::<usize>();
    let mut flag: bool = true; // True means at the end, false will mean at the start
    for i in 0..n {
        for j in 0..m {
            if i % 2 == 1 && flag == true && j != m - 1 {
                write!(w, ".").ok();
            } else if i % 2 == 1 && flag == true && j == m - 1 {
                writeln!(w, "#").ok();
                flag = false;
            } else if i % 2 == 1 && flag == false && j == 0 {
                write!(w, "#").ok();
            } else if i % 2 == 1 && flag == false && j != m - 1 {
                write!(w, ".").ok();
            } else if i % 2 == 1 && flag == false && j == m - 1 {
                writeln!(w, ".").ok();
                flag = true;
            } else if i % 2 == 0 && j != m - 1 {
                write!(w, "#").ok();
            } else if i % 2 == 0 && j == m - 1 {
                writeln!(w, "#").ok();
            }
        }
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());
    solve(&mut scan, &mut out);
}
