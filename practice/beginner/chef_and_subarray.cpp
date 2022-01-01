#include <iostream>
int main() {
  std::ios_base::sync_with_stdio();
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, c = 0;
    std::cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    for (int i = 0; i < n; i++) {
      int sum = 0, product = 1;
      for (int j = i; j < n; j++) {
        sum += a[j];
        product *= a[j];
        if (sum == product)
          c++;
      }
    }
    std::cout << c << std::endl;
  }
}
