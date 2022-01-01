#include <cmath>
#include <iostream>
#include <vector>
#define ll long long
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int t = 0;
  std::cin >> t;
  while (t--) {
    ll n = 0, c = 0;
    std::cin >> n;
    std::vector<ll> a;
    while (n > 0) {
      ll x_1 = std::log2(n);
      ll y = std::pow(2, x_1) + 1;
      if (y > n) {
        y = std::pow(2, x_1) - 1;
        n -= y;
      } else
        n -= y;
      c++;
      a.push_back(y);
      if (n == 1) {
        c++;
        a.push_back(1);
        break;
      }
    }
    std::cout << c << std::endl;
    for (auto i : a)
      std::cout << i << " ";
    std::cout << std::endl;
  }
}
