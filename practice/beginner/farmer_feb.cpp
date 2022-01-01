#include <iostream>
bool is_prime(int n) {
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int x = 0, y = 0, c = 1;
    std::cin >> x >> y;
    for (int i = x + y + 1; ; i++)
      if (is_prime(i)) {
        std::cout << i - (x + y) << std::endl;
        break;
      }
  }
}
