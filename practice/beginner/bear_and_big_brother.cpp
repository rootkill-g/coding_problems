#include <bits/stdc++.h>

int main() {
  int a = 0, b = 0, c = 0;
  std::cin >> a >> b;
  while (a <= b) {
    a = a * 3;
    b = b * 2;
    c++;
  }
  std::cout << c << std::endl;
}
