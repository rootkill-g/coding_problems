#include <iostream>
#include <cstring>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  long long t = 0, o = 0, n = 0;
  std::cin >> t;
  char d[1000000];
  while (t--) {
    o = 0;
    std::cin >> d;
    n = std::strlen(d);
    for (int i = 0; i < n; i++)
      if (d[i] == '1') o++;
    if (n - o == 1 || o == 1) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
  }
}
