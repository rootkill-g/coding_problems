#include <bits/stdc++.h>

int main() {
  int n = 0, t = 0;
  std::string s, a;
  std::cin >> n >> t;
  std::cin >> s;
  for (int j = 0; j < t; j++) {
    for (int i = 0; i < n; i++) {
      if (s[i] == 'B' && s[i + 1] == 'G') {
        std::swap(s[i], s[i + 1]);
        i++;
      }
    }
  }
  std::cout << s << "\n";
  return 0;
}
