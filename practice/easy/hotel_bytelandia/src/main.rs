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

fn merge<T: std::cmp::PartialOrd + Copy>(arr1: &[T], arr2: &[T], ret: &mut [T]) {
    let mut left = 0;
    let mut right = 0;
    let mut index = 0;

    while left < arr1.len() && right < arr2.len() {
        if arr1[left] <= arr2[right] {
            ret[index] = arr1[left];
            left += 1;
        } else {
            ret[index] = arr2[right];
            right += 1;
        }

        index += 1;
    }

    if left < arr1.len() {
        ret[index..].copy_from_slice(&arr1[left..]);
    } else {
        ret[index..].copy_from_slice(&arr2[right..]);
    }
}

fn merge_sort<T: Copy + std::cmp::PartialOrd>(array: &mut [T]) {
    let mid = array.len() / 2;

    if mid == 0 {
        return;
    }

    merge_sort(&mut array[..mid]);
    merge_sort(&mut array[mid..]);

    let mut ret = array.to_vec();

    merge(&array[..mid], &array[mid..], &mut ret[..]);

    array.copy_from_slice(&ret);
}

fn solve<R: BufRead, W: Write>(scan: &mut Scanner<R>, w: &mut W) {
    let t: u8 = scan.token();
    for _ in 0..t {
        let n: usize = scan.token();
        let mut arri: Vec<u16> = (0..n).map(|_| scan.token::<u16>()).collect();
        let mut dept: Vec<u16> = (0..n).map(|_| scan.token::<u16>()).collect();
        let mut counter: isize = 0;
        let mut max: isize = isize::MIN;
        let mut i_loop_counter: usize = 0;
        let mut j_loop_counter: usize = 0;

        merge_sort(&mut arri);
        merge_sort(&mut dept);

        loop {
            if i_loop_counter >= n || j_loop_counter >= n {
                break;
            } else {
                if dept[j_loop_counter] > arri[i_loop_counter] {
                    counter += 1;

                    if counter > max {
                        max = counter;
                    }

                    i_loop_counter += 1;
                } else if arri[i_loop_counter] == dept[j_loop_counter] {
                    i_loop_counter += 1;
                    j_loop_counter += 1;
                } else {
                    counter -= 1;
                    j_loop_counter += 1;
                }
            }
        }

        writeln!(w, "{}", max).ok();
    }
}

fn main() {
    let (stdin, stdout) = (io::stdin(), io::stdout());
    let mut scan = Scanner::new(stdin.lock());
    let mut out = io::BufWriter::new(stdout.lock());

    solve(&mut scan, &mut out);
}
