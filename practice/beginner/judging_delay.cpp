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
    int n = 0, c = 0;
    std::cin >> n;
    int s[n], j[n];
    for (int i = 0; i < n; i++) {
      std::cin >> s[i] >> j[i];
      if (j[i] - s[i] > 5 || s[i] - j[i] > 5)
        c++;
    }
    std::cout << c << "\n";
  }
}
