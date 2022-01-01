#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n = 0, c = 0;
  std::cin >> n;
  std::string magpol[n];
  for (int i = 0; i < n; i++) {
    std::cin >> magpol[i];
    if (i > 0) {
      if (magpol[i] != magpol[i - 1]) c++;
    }
  }
  std::cout << c + 1 << std::endl;
}
