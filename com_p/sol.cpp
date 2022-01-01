#include <bits/stdc++.h>

using namespace std;

int main() {
  long n = 0, m = 0, a = 0, b = 0, k = 0, temp = 0, max = 0;
  cin >> n >> m;
  vector<long> res(n + 1);

  for (int i = 0; i < m; i++) {
    cin >> a >> b >> k;
    res[a] += k;
    if (b + 1 <= n) {
      res[b + 1] -= k;
    }
  }

  for (int i = 0; i <= n; i++) {
    temp += res[i];
    if (max < temp) {
      max = temp;
    }
  }

  cout << max << "\n";

  return 0;
}
