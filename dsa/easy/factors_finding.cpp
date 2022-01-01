#include <iostream>
#include <vector>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0, c = 0;
  std::vector<int> factors;
  std::cin >> n;
  for (int i = 1; i <= n; i++)
    if (n % i == 0) { factors.push_back(i); c++; }
  std::cout << c << std::endl;
  for (int i = 0; i < factors.size(); i++) std::cout << factors[i] << " ";
  std::cout << std::endl;
}
