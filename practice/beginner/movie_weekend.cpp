#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, c = 0;
    std::cin >> n;
    int l[n], r[n], min_index = n, max_lr = 0, max_r = 0;
    for (int i = 0; i < n; i++)
      std::cin >> l[i];
    for (int i = 0; i < n; i++)
      std::cin >> r[i];
    for (int i = 0; i < n; i++) {
      if (max_lr < (l[i] * r[i])) {
        max_lr = (l[i] * r[i]);
        max_r = r[i];
        min_index = i;
      }
      if (max_lr == (l[i] * r[i])) {
        if (r[i] > max_r) {
          min_index = i;
          max_r = r[i];
        }
      }
    }
    std::cout << min_index + 1 << std::endl;
  }
}
