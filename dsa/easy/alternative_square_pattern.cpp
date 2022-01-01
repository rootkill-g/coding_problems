#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0;
  std::cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      for (int j = 5 * i; j >= 5 * i - 4; j--) std::cout << j << " ";
      std::cout << std::endl;
    } else {
      for (int j = 5 * i - 4; j <= 5 * i; j++) std::cout << j << " ";
      std::cout << std::endl;
    }
  }
}
