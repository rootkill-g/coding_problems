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
    char a, b, c, x, y;
    std::cin >> a >> b >> c >> x >> y;
    if (x == a || y == a)
      std::cout << a << std::endl;
    else if (x == b || y == b)
      std::cout << b << std::endl;
    else
      std::cout << c << std::endl;
  }
}
