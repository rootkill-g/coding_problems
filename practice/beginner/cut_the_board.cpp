#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, m = 0;
    std::cin >> n >> m;
    std::cout << (n - 1) * (m - 1) << "\n";
  }
}
