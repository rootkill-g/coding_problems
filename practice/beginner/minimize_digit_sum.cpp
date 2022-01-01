#include <bits/stdc++.h>

void dec_to_b(unsigned int &sum, unsigned int n, int i) {
  if (n == 0)
    return;

  unsigned int x = n % i;
  n /= i;

  if (x < 0)
    n += 1;

  sum += x;
  dec_to_b(sum, n, i);
}

int main() {
  int q = 0;
  scanf("%d", &q);
  for (int j = 0; j < q; j++) {
    int b = 0, v = INT_MAX;
    unsigned int n = 0, l = 0, r = 0;
    scanf("%d %d %d", &n, &l, &r);
    int sum_of_digits[r - l + 1];
    for (unsigned int i = l; i <= r; i++) {
      unsigned int sum = 0;
      dec_to_b(sum, n, i);
      sum_of_digits[i] = sum;
    }
    for (unsigned int i = l; i <= r; i++) {
      if (v > std::min(v, sum_of_digits[i])) {
        v = sum_of_digits[i];
        b = i;
      }
    }
    printf("%d\n", b);
  }
}
