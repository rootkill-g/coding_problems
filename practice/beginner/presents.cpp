#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n = 0;
  std::cin>> n;
  int p_i[n];
  for (int i = 1; i <= n; i++) {
    int temp = 0;
    std::cin>> temp;
    p_i[temp - 1] = i;
  }
  for (int i = 0; i < n; i++) {
    std::cout << p_i[i] << " ";
  }
  std::cout << std::endl;
}
