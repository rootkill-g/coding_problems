#include <cmath>
#include <iostream>
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
    int n = 0, x = 0, k = 0, c = 0;
    std::cin >> n >> x >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    for (int i = 0; i < n; i++)
      std::cin >> b[i];
    for (int i = 0; i < n; i++)
      if (abs(a[i] - b[i]) <= k)
        c++;
    std::cout << (c >= x ? "YES\n" : "NO\n");
  }
}
