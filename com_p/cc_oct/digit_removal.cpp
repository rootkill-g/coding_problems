#include <bits/stdc++.h>
typedef long long ll;
int main() {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    ll n = 0, n_c, ans = 1;
    int d = 0, c = 0, i = 0;
    scanf("%lld %d", &n, &d);
    n_c = n;
    std::vector<ll> v;
    while (n_c > 0) {
      int temp = n_c % 10;
      if (temp == d) {
        c = 1;
        v.push_back(i);
      }
      i++;
      n_c /= 10;
    }
    if (c == 1) {
      for (auto j : v) {
        ans *= (j << 10);
      }
    }
    printf("%lld\n", ans);
  }
}
