#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int k = 0, l = 0, m = 0, n = 0, d = 0, x = 0;
  std::cin >> k >> l >> m >> n >> d;
  if (k == 1 || l == 1 || m == 1 || n == 1) std::cout << d << std::endl;
  else {
    for (int i = 1; i <= d; i++)
      if ((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0))
        x++;
    std::cout << x << std::endl;
  }
}
