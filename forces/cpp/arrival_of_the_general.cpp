#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0, max = 0, min = 1e5, max_i = 0, min_i = 0;
  std::cin >> n;
  int a[n] = {0};
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
    if (a[i] > max) {
      max = a[i];
      max_i = i;
    }
    if (a[i] <= min) {
      min = a[i];
      min_i = i;
    }
  }
  if (max_i > min_i) min_i++;
  std::cout << (int) (max_i + (n - 1) - min_i) << std::endl;
}
