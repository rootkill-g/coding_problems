#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  long long t = 0, n = 0;
  std::cin >> t;
  while (t--) {
    std::cin >> n;
    long long a[n + 1] = {0}, b[n + 1] = {0}, c = 0, i = 1;
    for (i = 1; i <= n; i++)
      std::cin >> a[i];
    for (i = 1; i <= n; i++)
      std::cin >> b[i];
    for (i = 1; i <= n; i++)
      if (a[i] - a[i - 1] >= b[i])
        c++;
    std::cout << c << std::endl;
  }
}
