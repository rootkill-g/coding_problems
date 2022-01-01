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
    int x = 0, y = 0, z = 0;
    std::cin >> x >> y >> z;
    int s1 = x + y, s2 = y + z, s3 = x + z;
    if (s1 == z || s2 == x || s3 == y)
      std::cout << "YES\n";
    else
      std::cout << "NO\n";
  }
}
