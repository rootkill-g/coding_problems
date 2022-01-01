#include <bits/stdc++.h>

int main() {
  int n, a, c;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  a = s.size();
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == s[i + 1]) {
      s.erase(i + 1, 1);
      i--;
    }
  }
  c = a - s.size();
  std::cout << c << "\n";
  return 0;
}
