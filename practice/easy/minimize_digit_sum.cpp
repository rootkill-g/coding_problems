#include <cmath>
#include <iostream>
typedef long long ll;
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  ll t = 0;
  std::cin >> t;
  while (t--) {
    ll n = 0, l = 0, r = 0, val = 1e9 + 1, ans = -1;
    std::cin >> n >> l >> r;
    for (ll i = l; i * i <= n and i <= r; i++) {
      ll N = n, cur = 0;
      while (N > 0) {
        cur += N % i;
        N /= i;
      }
      if (cur < val) {
        val = cur;
        ans = i;
      }
    }
    if (val > n) {
      val = n;
      ans = l;
    }
    for (ll i = 1; i <= sqrt(n) + 1; i++) {
      ll B = n / i;
      ll b = n - i * B;
      if (l <= B and B <= r and b >= 0 and b < B and i + b < val) {
        val = i + b;
        ans = B;
      }
    }
    ll B = r;
    ll a = n / B;
    ll b = n - a * B;
    if (b >= 0 and b < B and a + b < val) {
      val = a + b;
      ans = B;
    }
    std::cout << ans << "\n";
  }
}
