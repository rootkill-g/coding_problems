#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    long long int n = 0;
    std::cin >> n;
    long long int a[n] = {0}, ans[n] = {0};
    ans[n-1] = 1;
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    for (int i = n - 2; i >= 0; i--) {
      if ((a[i] > 0 && a[i + 1] < 0) || (a[i] < 0 && a[i + 1] > 0))
        ans[i] = ans[i + 1] + 1;
      else ans[i] = 1;
    }
    for (int i = 0; i < n; i++) std::cout << ans[i] << " ";
    std::cout << std::endl;
  }
}
