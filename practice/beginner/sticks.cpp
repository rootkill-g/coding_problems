#include <algorithm>
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
    int n = 0, l = 0, b = 0;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    std::sort(a, a + n);
    for (int i = n - 1; i > 0; i--) {
      if (a[i] == a[i - 1] && !l) {
        l = a[i];
        i--;
        continue;
      }
      if (a[i] == a[i - 1] && !b) {
        b = a[i];
        i--;
        continue;
      }
    }
    std::cout << (l * b ? l * b : -1) << "\n";
  }
}
