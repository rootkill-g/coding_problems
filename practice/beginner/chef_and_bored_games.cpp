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
    for (int i = 1; i <= n; i += 2)
      c += (n - i + 1) * (n - i + 1);
    std::cout << c << "\n";
  }
}
