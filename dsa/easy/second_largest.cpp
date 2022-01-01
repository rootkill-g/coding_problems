#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n[3] = {0}, m = 0, s = 0;
  for (int i = 0; i < 3; i++) std::cin >> n[i];
  if (n[0] > n[1] && n[0] > n[2]) m = n[0];
  if (n[1] > n[0] && n[1] > n[2]) m = n[1];
  if (n[2] > n[0] && n[2] > n[1]) m = n[2];
  if (n[0] < n[1] && n[0] < n[2]) s = n[0];
  if (n[1] < n[0] && n[1] < n[2]) s = n[1];
  if (n[2] < n[0] && n[2] < n[1]) s = n[2];
  for (int i = 0; i < 3; i++) if (n[i] > s && n[i] < m) std::cout << n[i] << std::endl;
}
