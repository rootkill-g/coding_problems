#include <iostream>
typedef long long ll;
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int t;
  std::cin >> t;
  while (t--) {
    int n, count = 0, flag = 0;
    std::cin >> n;
    std::string a, b;
    std::cin >> a >> b;
    if (a[n - 1] < b[n - 1]) {
      flag++;
      count++;
    }
    for (int i = n - 2; i >= 0; i--) {
      if (a[i] < b[i]) {
        count++;
        flag = 1;
      }
      if (a[i] == b[i]) {
        if (flag == 1) {
          count++;
        }
      }
      if (a[i] > b[i]) {
        flag = 0;
      }
    }
    std::cout << (count) << "\n";
  }
}
