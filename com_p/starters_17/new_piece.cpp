#include <cmath>
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
    int a = 0, b = 0, p = 0, q = 0;
    std::cin >> a >> b >> p >> q;
    if (a == p && b == q) {
      std::cout << "0\n";
      continue;
    } else {
      if (((a + b) % 2) != ((p + q) % 2))
        std::cout << "1\n";
      else
        std::cout << "2\n";
    }
  }
}
