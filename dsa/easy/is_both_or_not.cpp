#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0;
  std::cin >> n;
  if (n % 5 == 0 && n % 11 == 0) std::cout << "BOTH" << std::endl;
  else if ((n % 5 == 0 && n % 11 != 0) || (n % 5 != 0 && n % 11 == 0)) std::cout << "ONE" << std::endl;
  else std::cout << "NONE" << std::endl;
}
