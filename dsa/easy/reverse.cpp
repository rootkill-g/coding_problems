#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0;
  std::cin >> n;
  int a[n] = {0};
  for (int i = 0; i < n; i++) std::cin >> a[i];
  for (int i = n - 1; i >= 0; i--) std::cout << a[i] << " ";
  std::cout << std::endl;
}
