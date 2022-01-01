#include <cmath>
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
    double n = 0, v_1 = 0, v_2 = 0;
    std::cin >> n >> v_1 >> v_2;
    (std::sqrt(2) * n / v_1) < (2 * n / v_2) ? std::cout << "Stairs\n" : std::cout << "Elevator\n";
  }
}
