#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int l = 0, r = 0;
  std::cin >> l >> r;
  for (int i = l; i <= r; i++) if (i % 2 == 1) std::cout << i << " ";
  std::cout << std::endl;
}
