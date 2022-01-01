#include <algorithm>
#include <iostream>
#include <string>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, c_b = 0, c_w = 0;
    std::cin >> n;
    std::string s;
    char c;
    std::cin >> s;
    c = s[0];
    if (c == 'W')
      c_w++;
    else
      c_b++;
    for (int i = 0; i < n; i++) {
      if (c == s[i])
        continue;
      else if (s[i] == 'B')
        c_b++;
      else
        c_w++;
      c = s[i];
    }
    std::cout << std::min(c_b, c_w) << std::endl;
  }
}
