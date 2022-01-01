#include <iostream>
#define ll unsigned long long int
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  ll t = 0;
  std::cin >> t;
  while (t--) {
    ll x = 0, f = -1;
    std::cin >> x;
    if (x % 10 == 0) std::cout << "0" << std::endl;
    else if (x % 5 == 0) std::cout << "1" << std::endl;
    else std::cout << "-1" << std::endl;
  }
}
