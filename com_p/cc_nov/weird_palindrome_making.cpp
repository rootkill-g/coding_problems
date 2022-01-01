#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0;
    std::cin >> n;
    long long a[n], odds = 0;
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
      if (a[i] % 2 != 0)
        odds++;
    }
    std::cout << odds / 2 << std::endl;
  }
}
