#![allow(unused)]
use std::cmp::{max, min, Reverse};
use std::io::{self, prelude::*};
use std::str;

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
    // To Scan input use : scan.token::<usize>();
    // To write output : write!(w, "{}", var).ok();
    // To write to new line : writeln!(w, "{}", var).ok();
    let n = scan.token::<usize>();
    let mut s_i: Vec<String> = Vec::new();

    for _ in 0..n {
        let temp = scan.token::<String>();
        s_i.push(temp);
    }

    let l = s_i.len();
    let mut total_faces: u64 = 0;

    for i in 0..l {
        if s_i[i].as_str() == "Tetrahedron" {
            total_faces += 4
        } else if s_i[i] == "Cube" {
            total_faces += 6
        } else if s_i[i] == "Octahedron" {
            total_faces += 8
        } else if s_i[i] == "Dodecahedron" {
            total_faces += 12
        } else if s_i[i] == "Icosahedron" {
            total_faces += 20
        } else {
            continue;
        }
    }

    writeln!(w, "{}", total_faces);
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());
    solve(&mut scan, &mut out);
}
