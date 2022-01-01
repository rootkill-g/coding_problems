#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int a = 0, b = 0, x = 0, y = 0;
  std::cin >> a >> b >> x >> y;
  std::cout << (a * x) + (b * y) << std::endl;
}
