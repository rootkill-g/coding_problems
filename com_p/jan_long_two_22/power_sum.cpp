#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
set<ll> powers_of_two;
void solve() {
  for (ll i = 0; i < 63; i++) {
    ll x = pow(2, i);
    powers_of_two.insert(x);
  }
  ll n = 0, sum = 0;
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  if (powers_of_two.find(sum) != powers_of_two.end()) {
    cout << "0\n";
    return;
  } else {
    ll next = *powers_of_two.lower_bound(sum);
    ll d = next - sum;
    for (ll i = 0; i < n; i++) {
      if (d % a[i] == 0) {
        cout << "1\n";
        cout << "1 " << (d + a[i]) / a[i] << "\n";
        cout << i + 1 << "\n";
        return;
      }
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
    solve();
  }
  return 0;
}
