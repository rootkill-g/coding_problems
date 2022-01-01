#include <iostream>
#include <vector>
int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int t = 0;
  std::cin >> t;
  while (t--) {
    long long n = 0, ans = 1;
    std::cin >> n;
    std::vector<long long> a(n), dp(n, 1);
    for (long long &x : a) std::cin >> x;
    for (long long i = 1; i < n; i++) {
      if (a[i - 1] <= a[i]) dp[i] += dp[i - 1];
      ans += dp[i];
    }
    std::cout << ans << "\n";
  }
}
