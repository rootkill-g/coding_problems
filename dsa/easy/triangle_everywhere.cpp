#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int a = 0, b = 0, c = 0;
  std::cin >> a >> b >> c;
  if (a + b > c && a + c > b && b + c > a) {
    if (a == b && b == c) std::cout << 1 << std::endl;
    else if (a == b || b == c || a == c) std::cout << 2 << std::endl;
    else std::cout << 3 << std::endl;
  } else std::cout << -1 << std::endl;
}
