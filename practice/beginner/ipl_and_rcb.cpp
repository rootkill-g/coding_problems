#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int x = 0, y = 0;
    std::cin >> x >> y;
    std::cout << std::max(0, x - y) << std::endl;
  }
}
