#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  long t = 0;
  std::cin >> t;
  while (t--) {
    long k = 0, c = 0;
    std::cin >> k;
    for (int i = 1; i <= k; i++) {
      if (i % 2 == 0) c -= 1;
      else c += 3;
    }
    std::cout << c << std::endl;
  }
}
