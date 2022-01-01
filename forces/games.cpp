#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0, c = 0;
  std::cin >> n;
  int h[n] = {0}, a[n] = {0};
  for (int i = 0; i < n; i++) std::cin >> h[i] >> a[i];
  for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (h[i] == a[j]) c++;
  std::cout << c << std::endl;
}
