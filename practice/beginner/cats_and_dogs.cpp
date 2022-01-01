#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int a = 0, b = 0, c = 0, d = 0, l = 0;
    std::cin >> c >> d >> l;
    a = (l / 4) - d;
    b = c - a;
    if (l % 4 != 0 || b > 2 * d || b < 0 || a < 0)
      std::cout << "no\n";
    else
      std::cout << "yes\n";
  }
}
