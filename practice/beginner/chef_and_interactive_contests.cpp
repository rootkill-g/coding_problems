#include <iostream>
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int n = 0, r = 0, x = 0;
  std::cin >> n >> r;
  for (int i = 0; i < n; i++) {
    std::cin >> x;
    if (x >= r) {
      std::cout << "Good boi" << std::endl;
    } else {
      std::cout << "Bad boi" << std::endl;
    }
  }
}
