#include <iostream>
#include <cstring>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    char s[55];
    int l = 0, c = 1, max = 0;
    std::cin >> s;
    l = std::strlen(s);
    for (int i = 0; i < l; i++) {
      for (int j = i + 1; j < l; j++)
        if (s[i] == s[j]) c++;
      if (c > max) {
        max = c;
        c = 1;
      } else c = 1;
    }
    ((max * 2) == l) ? std::cout <<  "YES\n" : std::cout << "NO\n";
  }
}
