#include <cmath>
#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, d = 0;
    std::cin >> n >> d;
    if (2 * std::sqrt(d) - 1 <= n)
      std::cout << "YES\n";
    else
      std::cout << "NO\n";
  }
}
