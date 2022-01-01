#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0, k = 0, flag = -1;
  std::cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
    if (a[i] == k) flag = 1;
  }
  std::cout << flag << std::endl;
}
