#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  long long n = 0;
  std::cin >> n;
  std::cout << n * (n + 1) / 2 << std::endl;
}
