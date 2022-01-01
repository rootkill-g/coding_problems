#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    long long n = 0, type = 0, c = 0;
    std::cin >> n;
    while (n--) {
      std::cin >> type;
      c = c ^ type;
    }
    std::cout << c << std::endl;
  }
}
