#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 0;
  cin >> t;
  while (t--) {
    int n = 0, c = 0, weird = 0;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    for (int i = 1; i <= n; i++) {
      for (int j = i; j <= n; j++) {
        c = count(a.begin() + i, a.begin() + j, a[j]);
        if (c == a[j])
          weird += c;
      }
    }
    cout << weird << "\n";
  }
}
