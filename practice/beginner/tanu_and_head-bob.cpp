#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, c = 0;
    std::string g;
    std::cin >> n >> g;
    for (int i = 0; i < n; i++) {
      if (g[i] == 'I') {
        std::cout << "INDIAN" << std::endl;
        break;
      }
      if (g[i] == 'Y') {
        std::cout << "NOT INDIAN" << std::endl;
        break;
      }
      c++;
    }
    if (c == n)
      std::cout << "NOT SURE" << std::endl;
  }
}
