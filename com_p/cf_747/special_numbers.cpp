#include <bits/stdc++.h>

const long long INF = 1e9 + 7;

int main(void) {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    long long n, k, p = 1, a = 0;
    scanf("%lld %lld", &n, &k);
    for (long long i = 0; i < 31; i++) {
      if (k & (1 << i)) {
        a = (a + p) % INF;
      }
      p *= n;
      p %= INF;
    }
    printf("%lld\n", a);
  }
}
