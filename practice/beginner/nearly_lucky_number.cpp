#include <bits/stdc++.h>
int main() {
  char s[1000];
  int l, r;
  while (std::cin >> s) {
    l = strlen(s);
    for (int i = 0; i < l; i++) {
      if (s[i] == '4' || s[i] == '7') {
        r++;
      }
    }
    if (r == 4 || r == 7) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
    r = 0;
  }
  return 0;
}
