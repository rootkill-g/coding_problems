#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, num = 1, flag = 0;
    bool boolflag = true;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    if (n < 13)
      std::cout << "no" << std::endl;
    else {
      for (int i = 0; i <= n / 2; i++) {
        if (a[i] != a[n - 1 - i] || a[i] != num) {
          flag = 1;
          break;
        }
        if (a[i] != a[i + 1])
          num++;
      }
      if (flag || num < 7)
        std::cout << "no" << std::endl;
      else
        std::cout << "yes" << std::endl;
    }
  }
}
