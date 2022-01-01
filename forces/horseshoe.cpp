#include <iostream>
#include <algorithm>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  long long a[4], c = 0;
  for (int i = 0; i < 4; i++) std::cin >> a[i];
  std::sort(a, a + 4);
  for (int i = 0; i < 4; i++)
    if (a[i] == a[i + 1]) c++;
  std::cout << c << std::endl;
}
