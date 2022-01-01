#include <iostream>
#define fast_io std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
int main() {
  fast_io;
  int n = 0, digits = 0;
  std::cin >> n;
  while (n > 0) {
    n /= 10;
    digits++;
  }
  if (digits <= 3)
      std::cout << digits << std::endl;
  else
    std::cout << "More than 3 digits" << std::endl;
}
