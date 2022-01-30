#include <iostream>
#include <string>
#include <algorithm>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0, c[26] = {0};
  std::cin >> n;
  std::string s;
  std::cin >> s;
  std::transform(s.begin(), s.end(), s.begin(), ::tolower);
  for (int i = 0; i < n; i++) {
    if (s[i] < 97) {
      s[i] += 32;
      c[s[i] - 'a'] += 1;
    } else c[s[i] - 'a'] += 1;
  }
  for (int i = 0; i < 26; i++) {
    if (c[i] == 0) {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
  return 0;
}
