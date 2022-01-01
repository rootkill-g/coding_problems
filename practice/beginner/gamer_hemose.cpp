#include <bits/stdc++.h>

int main() {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    long long n = 0, h = 0, c = 0;
    scanf("%lld %lld", &n, &h);
    std::vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
      scanf("%lld", &a[i]);
    }
    std::sort(a.begin(), a.end(), std::greater<>());
    for (long long i = 0; i < 2; i++) {
      h -= a[i];
      c++;
      if (h <= 0) {
        break;
      }
      if (i == 1) {
        i = 0;
      }
    }
    printf("%lld\n", c);
  }
}
