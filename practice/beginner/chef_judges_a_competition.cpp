#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, a_c = 0, b_c = 0;
    std::cin >> n;
    int a[n], b[n], a_max = 0, b_max = 0;
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
      a_c += a[i];
      if (a_max < a[i])
        a_max = a[i];
    }
    for (int i = 0; i < n; i++) {
      std::cin >> b[i];
      b_c += b[i];
      if (b_max < b[i])
        b_max = b[i];
    }
    if (a_c - a_max == b_c - b_max)
      std::cout << "Draw\n";
    else if (a_c - a_max < b_c - b_max)
      std::cout << "Alice\n";
    else if (a_c - a_max > b_c - b_max)
      std::cout << "Bob\n";
  }
}
