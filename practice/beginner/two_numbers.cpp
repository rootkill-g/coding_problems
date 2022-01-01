#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    long long a = 0, b = 0, n = 0;
    std::cin >> a >> b >> n;
    if (n % 2 == 1) a *= 2;
    std::cout << (a > b ? a / b : b / a) << std::endl;
  }
}
