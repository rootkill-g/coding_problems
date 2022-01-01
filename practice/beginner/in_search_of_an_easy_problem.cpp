#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n = 0;
  std::cin >> n;
  int x[n];
  for (int i = 0; i < n; i++) {
    std::cin >> x[i];
    if (x[i] == 1) { std::cout << "HARD" << std::endl; return 0; }
  }
  std::cout << "EASY" << std::endl;
}
