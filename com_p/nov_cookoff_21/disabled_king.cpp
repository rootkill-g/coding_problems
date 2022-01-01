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
    int x = 1, y = 1, n = 0, moves = 0;
    std::cin >> n;
    while (x != n) {
      if (y == 1) {
        y++;
        x++;
      } else if (y == 2) {
        y--;
        x++;
      }
      moves++;
    }
    if (x == n && y == 2) {
      y--;
      moves++;
    }
    std::cout << moves << "\n";
  }
}
