#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, k = 0, m = 0;
    std::cin >> n >> k;
    for (int i = 1; i < k + 1; i++) {
      m = ((n % i) > m) ? (n % i) : m;
    }
    std::cout << m << std::endl;
  }
}
