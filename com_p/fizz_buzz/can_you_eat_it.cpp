#include <iostream>
int main() {
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, k = 0;
    std::cin >> n >> k;
    if (n % k != 0)
      std::cout << -1 << std::endl;
    else
      std::cout << n / k << std::endl;
  }
}
