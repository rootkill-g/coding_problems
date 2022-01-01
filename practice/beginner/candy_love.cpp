#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, total_candies = 0, packet;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
      std::cin >> packet;
      total_candies += packet;
    }
    if (total_candies % 2 == 0) std::cout << "NO\n";
    else std::cout << "YES\n";
  }
}
