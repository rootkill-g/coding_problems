#include <iostream>
#include <algorithm>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int side[4] = {0};
    std::cin >> side[0] >> side[1] >> side[2] >> side[3];
    std::sort(side, side + 4);
    if ((side[0] == side[1]) && (side[2] == side[3]))
      std::cout << "YES\n";
    else
      std::cout << "NO\n";
  }
}
