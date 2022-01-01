#include <iostream>
#define fast_io std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
int main() {
  fast_io;
  int t = 0;
  std::cin >> t;
  while (t--) {
    unsigned long long int n = 0, h = 0;
    std::cin >> n;
    while (h * (h + 1) / 2 <= n)
      h = h + 1;
    std::cout << h - 1 << std::endl;
  }
}
