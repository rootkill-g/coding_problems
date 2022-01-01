#include <iostream>
#define fast                                                                   \
  std::ios_base::sync_with_stdio(false);                                       \
  std::cin.tie(nullptr);                                                       \
  std::cout.tie(nullptr)
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  fast;
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, k = 0, bill = 0;
    std::cin >> n >> k;
    int t[n], d[n];
    for (int i = 0; i < n; i++)
      std::cin >> t[i] >> d[i];
    for (int i = 0; i < n; i++) {
      if (t[i] >= k) {
        bill += (t[i] - k) * d[i];
        k = 0;
      } else
        k -= t[i];
    }
    std::cout << bill << "\n";
  }
}
