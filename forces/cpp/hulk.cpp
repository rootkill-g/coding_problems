#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0;
  std::cin >> n;
  if (n == 1) std::cout << "I hate it" << std::endl;
  else {
    for (int i = 1; i <= n; i++) {
      if (i % 2 != 0 && i != n) std::cout << "I hate that ";
      else if (i % 2 == 0 && i != n) std::cout << "I love that ";
      else if (i == n) { 
        if (n % 2 == 0) std::cout << "I love it" << std::endl;
        else std::cout << "I hate it" << std::endl;
      }
    }
  }
}
