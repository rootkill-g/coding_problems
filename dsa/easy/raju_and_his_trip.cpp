#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0;
  std::cin >> n;
  if (n % 5 == 0 || n % 6 == 0) std::cout << "YES" << std::endl;
  else std::cout << "NO" << std::endl;
}
