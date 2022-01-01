#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, b = 0, a_max = 0, flag = 0;
    std::cin >> n >> b;
    int w[n], h[n], p[n];
    for (int i = 0; i < n; i++)
      std::cin >> w[i] >> h[i] >> p[i];
    for (int i = 0; i < n; i++) {
      if (a_max < w[i] * h[i] && p[i] <= b) {
        a_max = w[i] * h[i];
        flag = 1;
      }
    }
    flag == 1 ? std::cout << a_max << "\n" : std::cout << "no tablet\n";
  }
}
