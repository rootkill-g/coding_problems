#include <bits/stdc++.h>

int main() {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int n = 0, a = 0, b = 0, t = 0;
    std::string s;
    scanf("%d %d %d", &n, &a, &b);
    std::cin >> s;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0') {
        t += a;
      } else {
        t += b;
      }
    }
    printf("%d\n", t);
  }
}
