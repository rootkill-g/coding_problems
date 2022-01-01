#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int l = 0, b = 0, a = 0, p = 0;
  std::cin >> l >> b;
  a = l * b;
  p = 2 * (l + b);
  if (a > p)
    std::cout << "Area\n" << a << std::endl;
  else if (p > a)
    std::cout << "Peri\n" << p << std::endl;
  else
    std::cout << "Eq\n" << a << std::endl;
}
