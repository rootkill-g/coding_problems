#include <iostream>
#include <string>
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
    int n = 0, m = 0;
    std::string v_and_h;
    std::cin >> n >> m;
    if (n == m)
      for (int i = 0; i < n + 1; i++)
        v_and_h += "01";
    else if (m > n) {
      for (int i = 0; i < n + 1; i++)
        v_and_h += "10";
      for (int i = 0; i < m - n - 1; i++)
        v_and_h += "110";
      v_and_h += "1";
    } else {
      for (int i = 0; i < m; i++)
        v_and_h += "01";
      for (int i = 0; i < n - m; i++)
        v_and_h += "010";
    }
    std::cout << v_and_h.size() << "\n" << v_and_h << "\n";
  }
}
