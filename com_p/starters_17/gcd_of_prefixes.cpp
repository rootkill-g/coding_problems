#include <algorithm>
#include <iostream>
#define ll long long
void print_array(std::vector<ll> &a) {
  ll size = a.size();
  for (ll i = 0; i < size; i++) std::cout << a[i] << " ";
}
int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int t = 0;
  std::cin >> t;
  while (t--) {
    ll n = 0, k = 0;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    bool flag = true;
    for (int i = 0; i < n; i++)
      std::cin >> b[i];
    for (int i = 0; i < n; i++) {
      k = std::__gcd(k, b[i]);
      a[i] = k;
      if (a[i] != b[i]) flag = false;
    }
    if (flag) {print_array(a); std::cout << std::endl;}
    else std::cout << "-1\n";
  }
}
