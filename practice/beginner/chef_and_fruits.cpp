#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, m = 0, k = 0, d = 0;
    std::cin >> n >> m >> k;
    if (n > m) {
      d = n - m;
      m += std::min(d, k);
      std::cout << n - m << std::endl;
    } else if (n == m) {
      std::cout << 0 << std::endl;
    } else {
      d = m - n;
      n += std::min(d, k);
      std::cout << m - n << std::endl;
    }
  }
}
