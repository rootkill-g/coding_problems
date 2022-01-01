#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
void brutal(ll n) {
  ll c = 2;
  for (int i = 2; i < n; i++) {
    c *= 2;
    if (c == n) {
      cout << (c * 2 - 1) % MOD << "\n";
      break;
    } else if (c > n) {
      cout << c % MOD << "\n";
      break;
    }
  }
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0, ans = 0;
    cin >> n;
    if (n == 1)
      cout << "1\n";
    else if (n == 2)
      cout << "2\n";
    else if (n == 3)
      cout << "4\n";
    else if (n == 4)
      cout << "7\n";
    else
      brutal(n);
  }
}
