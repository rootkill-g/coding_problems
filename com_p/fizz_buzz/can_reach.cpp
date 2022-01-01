#include <iostream>
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
    int x = 0, y = 0, k = 0;
    std::cin >> x >> y >> k;
    if (x % k == 0 && y % k == 0)
      std::cout << "YES\n";
    else
      std::cout << "NO\n";
  }
}
