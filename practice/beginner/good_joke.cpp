#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, x = 0, y = 0, a = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
      std::cin >> x >> y;
    for (int i = 1; i <= n; i++)
      a ^= i;
    std::cout << a << std::endl;
  }
}
