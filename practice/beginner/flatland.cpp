#include <cmath>
#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, r = 0, c = 0;
    std::cin >> n;
    while (n > 0) {
      r = std::floor(std::sqrt(n));
      n -= r * r;
      c++;
    }
    std::cout << c << std::endl;
  }
}
