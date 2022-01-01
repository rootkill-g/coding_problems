#include <iostream>
int main() {
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0;
    bool flag = false;
    std::string s;
    std::cin >> n >> s;
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == s[i + 1]) {
        flag = true;
        break;
      }
    }
    if (flag)
      printf("YES\n");
    else
      printf("NO\n");
  }
}
