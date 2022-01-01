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
    int n = 0, goals = 20, fouls = -10, max_score = 0;
    std::cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    for (int i = 0; i < n; i++)
      std::cin >> b[i];
    for (int i = 0; i < n; i++)
      if (max_score < ((a[i] * goals) + (b[i] * fouls)))
        max_score = ((a[i] * goals) + (b[i] * fouls));
    max_score > 0 ? std::cout << max_score << "\n" : std::cout << "0\n";
  }
}
