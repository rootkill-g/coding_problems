#include <iostream>
#include <vector>
#define ll unsigned long long
std::vector<ll> prime_matrix(10000001, 1);
std::vector<ll> primes(10000001, 0);
void prime_collection() {
  prime_matrix[0] = 0;
  prime_matrix[1] = 0;
  for (ll i = 2; (i * i) <= 10000000; i++) {
    if (prime_matrix[i]) {
      for (ll j = i * i; j <= 10000000; j += i) {
        prime_matrix[j] = 0;
      }
    }
  }
  for (ll i = 2; i <= 10000000; i++) {
    primes[i] = primes[i - 1] + prime_matrix[i];
  }
}
void solve() {
  ll x = 0, y = 0, c = 0;
  std::cin >> x >> y;
  if (x == 1 && y == 2) {
    std::cout << 2 << "\n";
    return;
  } else if (x == 1 && y == 3) {
    std::cout << 2 << "\n";
    return;
  } else if (x == 2 && y == 3) {
    std::cout << 2 << "\n";
    return;
  }
  c = (y - x) - (primes[y] - primes[x]);
  if (prime_matrix[x + 1])
    c++;
  std::cout << c << "\n";
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  prime_collection();
  ll t = 0;
  std::cin >> t;
  while (t--) {
    solve();
  }
}
