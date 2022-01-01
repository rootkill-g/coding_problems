#include <bits/stdc++.h>

int main() {
  std::string s, t;
  int count = 0;
  std::cin >> s >> t;
  if (s.size() != t.size()) {
    std::cout << "NO\n";
    return 0;
  } else {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == t[t.size() - 1 - i]) {
        count++;
      } else {
        break;
      }
    }
    if (count == s.size()) {
      std::cout << "YES\n";
    } else {
      std::cout << "NO\n";
    }
  }
  return 0;
}
