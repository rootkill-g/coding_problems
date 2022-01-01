#include <iostream>
#include <algorithm>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int m = 0, n = 0, s = 0;
    std::cin >> m >> n;
    s = std::__gcd(m, n);
    std::cout << (m / s) * (n / s) << std::endl;
  }
}
