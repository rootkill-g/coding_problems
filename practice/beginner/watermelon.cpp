#include <bits/stdc++.h>
int main() {
  int kg = 0;
  std::cin >> kg;
  if (kg % 2 == 0 && kg != 2) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}
