#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    long long x = 0, y = 0;
    std::cin >> x >> y;
    if (x % 2 == 0) {
      if (x == 0 && y % 2 == 0)
        std::cout << "YES" << std::endl;
      else if (x == 0 && y % 2 != 0)
        std::cout << "NO" << std::endl;
      else
        std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
}
