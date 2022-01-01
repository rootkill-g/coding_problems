#include <bits/stdc++.h>
#define ll long long
const ll MOD = 1e9 + 7;
ll bin_power(ll a, ll n) {
  ll res = 1;
  while (n) {
    if (n & 1)
      res = (1LL * res * a) % MOD;
    a = (1LL * a * a) % MOD;
    n >>= 1;
  }
  return res;
}
void binary_search(ll n, ll pos, ll &big, ll &less) {
  ll l = 0, r = n;
  while (l < r) {
    ll m = (l + r) / 2;
    if (pos >= m) {
      if (pos != m)
        less++;
      l = m + 1;
    } else if (pos < m) {
      big++;
      r = m;
    }
  }
}
ll count(ll n, ll k, const std::vector<ll> &fact, const std::vector<ll> &inv) {
  if (k > n)
    return 0;
  ll multiply = (1LL * fact[n] * inv[k]) % MOD;
  multiply = (1LL * multiply * inv[n - k]) % MOD;
  return multiply;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  ll n = 0, x = 0, pos = 0;
  ll ans = 0;
  std::cin >> n >> x >> pos;
  std::vector<ll> fact(n + 1, 1LL);
  std::vector<ll> inv(n + 1, 1LL);
  for (ll i = 1; i <= n; i++) {
    fact[i] = (fact[i - 1] * i) % MOD;
    inv[i] = bin_power(fact[i], MOD - 2);
  }
  ll big = 0, less = 0;
  binary_search(n, pos, big, less);
  ll other = (n - big - less - 1);
  ll can_big = n - x, can_less = x - 1;
  ll count_less = count(can_less, less, fact, inv);
  ll count_big = count(can_big, big, fact, inv);
  count_big = (1LL * count_big * fact[big]) % MOD;
  count_less = (1LL * count_less * fact[less]) % MOD;
  ll multiply = (1LL * count_big * count_less) % MOD;
  multiply = (1LL * multiply * fact[other]) % MOD;
  ans = (ans + multiply) % MOD;
  std::cout << ans << std::endl;
}
