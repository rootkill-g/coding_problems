#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, k = 0, i = 0, m = 0;
    std::cin >> n >> k;
    for (i = 0; i < n; i++) {
      std::cin >> m;
      if (m <= k) {
        k -= m;
        std::cout << "1";
      } else std::cout << "0";
    }
    std::cout << std::endl;
  }
}
