#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    long long a = 0, b = 0, r = 0, m = 0, d = 0;
    std::cin >> a >> b;
    r = a + b;
    while (r != 0) {
      d = r % 10;
      r /= 10;
      switch (d) {
        case 0: case 6: case 9: m += 6; break;
        case 1: m += 2; break;
        case 2: case 3: case 5: m += 5; break;
        case 4: m += 4; break;
        case 7: m += 3; break;
        case 8: m += 7; break;
        default: break;
      }
    }
    std::cout << m << std::endl;
  }
}
