#include <iostream>
int main() {
  int t = 0;
  std::cin >> t;
  while (t--) {
    int a_c = 0, b_c = 0;
    std::string n;
    std::cin >> n;
    for (char c : n) {
      if (c == 'a') a_c++;
      else if (c == 'b') b_c++;
    }
    if (a_c >= b_c) std::cout << b_c << std::endl;
    else std::cout << a_c << std::endl;
  }
}
