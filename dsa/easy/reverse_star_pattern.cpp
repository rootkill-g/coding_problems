#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j >= (n - (i + 1))) std::cout << "*";
      else std::cout << " ";
    }
    std::cout << std::endl;
  }
}
