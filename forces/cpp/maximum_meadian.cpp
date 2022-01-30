#include <algorithm>
#include <iostream>
#define ll long long
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  ll n = 0, k = 0;
  std::cin >> n >> k;
  ll a[n];
  for (ll i = 0; i < n; i++)
    std::cin >> a[i];
  std::sort(a, a + n);
  ll l = 0, ans = a[n / 2], h = 1e18 + 101;
  while (l <= h) {
    ll m = l + ((h - l) >> 1), sum = 0;
    for (int i = n / 2; i < n; i++) {
      if (a[i] <= m)
        sum += (m - a[i]);
      if (sum > k)
        break;
    }
    if (sum <= k) {
      ans = std::max(ans, m);
      l = m + 1;
    } else
      h = m - 1;
  }
  std::cout << ans << std::endl;
}
