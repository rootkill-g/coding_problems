#include <bits/stdc++.h>
using namespace std;
int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  int t = 0;
  cin >> t;
  while (t--) {
    string a, b, y, s;
    int n = 0, x[26]{0};

    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
      x[a[i] - 97]++;
    }

    for (int i = 0; i < b.length(); i++) {
      x[b[i] - 97]++;
    }

    cin >> n;

    bool flag = true;

    for (int i = 0; i < n; i++) {
      cin >> s;
      y += s;
    }

    for (int i = 0; i < y.length(); i++) {
      if (x[y[i] - 97] > 0) {
        x[y[i] - 97]--;
      } else {
        flag = false;
        break;
      }
    }

    flag ? cout << "YES\n" : cout << " NO\n ";
  }
}
