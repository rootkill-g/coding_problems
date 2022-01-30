#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0, c = 0;
  std::cin >> n;
  while (n > 0) {
    if (n < 5) {
      n -= 1;
      c++;
    } else if (n < 10) {
      n -= 5;
      c++;
    } else if (n < 20) {
      n -= 10;
      c++;
    } else if (n < 100) {
      n -= 20;
      c++;
    } else {
      n -= 100;
      c++;
    }
  }
  std::cout << c << std::endl;
}
