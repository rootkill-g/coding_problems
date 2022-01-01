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
    int n = 0, max = INT_MIN, min = INT_MAX;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    vector<int>::iterator maxit = max_element(a.begin(), a.end());
    max = *maxit;
    vector<int>::iterator minit = min_element(a.begin(), a.end());
    min = *minit;
    if (min == max)
      cout << "0\n";
    else if (a[n - 1] == max)
      cout << "1\n";
    else
      cout << "2\n";
  }
}
