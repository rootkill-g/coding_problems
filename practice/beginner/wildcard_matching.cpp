#include <iostream>
#include <cstring>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    char x[10], y[10];
    bool flag = true;
    std::cin >> x >> y;
    for (int i = 0; i < strlen(x); i++) {
      if (((x[i] >= 'a' && x[i] <= 'z') && (y[i] >= 'a' && y[i] <= 'z')) && x[i] != y[i]) {
          flag = false;
          break;
      }
    }
    if (flag) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;
  }
}
