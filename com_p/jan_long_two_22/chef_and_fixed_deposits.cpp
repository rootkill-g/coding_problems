#include <algorithm>
#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, x = 0, sum = 0, c = 0;
    std::cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    std::sort(a, a + n);
    std::reverse(a, a + n);
    for (int i = 0; i < n; i++) {
      if (sum < x) {
        sum += a[i];
        c++;
      }
    }
    sum >= x ? std::cout << c << '\n' : std::cout << "-1\n";
  }
}
