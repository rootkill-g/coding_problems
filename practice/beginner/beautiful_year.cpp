#include <bits/stdc++.h>

int main() {
  unsigned short int year = 0;
  std::cin >> year;
  while (true) {
    year++;
    int a = year % 10, b = (year / 10) % 10, c = (year / 100) % 10,
        d = (year / 1000) % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d) {
      break;
    }
  }
  std::cout << year << "\n";
  return 0;
}
