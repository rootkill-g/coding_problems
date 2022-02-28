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
    let n: usize = scan.token();
    let mut mat = vec![vec![0usize; n]; n];
    let mut indeg = vec![0usize; n];
    let mut edges: Vec<(usize, usize)> = Vec::new();

    for i in 0..n {
        for j in 0..n {
            mat[i][j] = 0;
        }
    }

    if n % 2 == 0 {
        writeln!(w, "NO").ok();
        return;
    }

    writeln!(w, "YES").ok();

    for i in 0..n {
        indeg[i] = 0;
    }

    for i in 0..n {
        for j in 1..(((n - 1) / 2) + 1) {
            let send: usize = (i + j) % n;
            mat[i][send] = 1;
            edges.push((i, send));
            indeg[send] += 1;
        }
    }

    for i in 0..n {
        for j in 0..n {
            write!(w, "{}", mat[i][j]).ok();
        }
        writeln!(w, "").ok();
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());
    let t: usize = scan.token();

    for _ in 0..t {
        solve(&mut scan, &mut out);
    }
}
