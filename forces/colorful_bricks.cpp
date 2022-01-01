#include <iostream>
#define ll long long
const ll MOD = 998244353;
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  ll n = 0, m = 0, k = 0;
  std::cin >> n >> m >> k;
  if (k == 0)
    std::cout << m % MOD << "\n";
  else
    std::cout << (m * m) % MOD << "\n";
}
