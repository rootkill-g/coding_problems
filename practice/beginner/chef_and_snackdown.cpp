#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0;
    std::cin >> n;
    if (n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019)
      std::cout << "HOSTED" << std::endl;
    else
      std::cout << "NOT HOSTED" << std::endl;
  }
}
