#include <iostream>
#include <cmath>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  long long n = 0;
  std::cin >> n;
  (n % 2 == 0) ? std::cout << n / 2 << std::endl : std::cout << -(n + 1) / 2 << std::endl;
}
