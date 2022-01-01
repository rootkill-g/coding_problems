#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 0;
  cin >> t;
  while (t--) {
    int n = 0;
    string s, t;
    cin >> n;
    if (n % 2 == 1)
      cout << "-1\n";
    else {
      for (int i = 0; i < n / 2; i++) {
        s += '1';
        t += '0';
      }
      cout << s + t << "\n";
    }
  }
}
