#include <iostream>
#include <unordered_map>
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
    int n = 0, el = 0, max_frequency = 0;
    std::cin >> n;
    std::unordered_map<int, int> frq;
    for (int i = 0; i < n; i++) {
      std::cin >> el;
      frq[el]++;
    }
    for (auto i : frq)
      if (i.second > max_frequency)
        max_frequency = i.second;
    if (n == 1 || max_frequency == n)
      std::cout << "0\n";
    else {
      if (max_frequency == 1)
        std::cout << "-1\n";
      else
        std::cout << n - max_frequency + 1 << "\n";
    }
  }
}
