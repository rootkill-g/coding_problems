#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  long long r = 0, scholarship = 0;
  std::cin >> r;
  if (r <= 50)
    scholarship = 100;
  else if (r <= 100)
    scholarship = 50;
  else
    scholarship = 0;
  std::cout << scholarship << std::endl;
}
