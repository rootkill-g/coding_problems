#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int a = 0, b = 0, c = 0;
  std::cin >> a >> b >> c;
  if (a + b > c && a + c > b && b + c > a) std::cout << "YES" << std::endl;
  else std::cout << "NO" << std::endl;
}
