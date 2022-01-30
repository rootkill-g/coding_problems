#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0, a = 0, b = 0;
  std::cin >> t;
  while (t--) {
    std::cin >> a >> b;
    if (a % b != 0)
      std::cout << b - (a % b) << std::endl;
    else
      std::cout << "0" << std::endl;
  }
}
