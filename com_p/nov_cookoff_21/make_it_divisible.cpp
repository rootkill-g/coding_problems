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
  long long t = 0;
  std::cin >> t;
  while (t--) {
    long long n = 0, ones = 0, twos = 0, input = 0, ans = 0, remainder = 0;
    std::cin >> n;
    for (long long i = 0; i < n; i++) {
      std::cin >> input;
      if (input % 3 == 1)
        ones++;
      if (input % 3 == 2)
        twos++;
    }
    ans = std::min(ones, twos);
    remainder = std::max(ones, twos) - ans;
    if (remainder % 3 == 0)
      ans += (2 * (remainder / 3));
    else
      ans = -1;
    std::cout << ans << std::endl;
  }
}
