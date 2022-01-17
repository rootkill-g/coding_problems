#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, c_u = 0, c_l;
    std::cin >> n;
    int r[3], g[3], b[3];
    for (int i = 0; i < 3; i++)
      std::cin >> r[i];
    for (int i = 0; i < 3; i++)
      std::cin >> g[i];
    for (int i = 0; i < 3; i++)
      std::cin >> b[i];
    c_u += r[1] + r[2] + g[2];
    c_l = g[0] + b[0] + b[1];
    c_u > c_l ? std::cout << c_u << '\n' : std::cout << c_l << '\n';
  }
}
