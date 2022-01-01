#include <ios>
#include <iostream>
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int t = 0;
  std::cin >> t;
  while (t--) {
    std::string s;
    int flag = 0, c = 0;
    std::cin >> s;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '1') {
        if (flag == 1)
          continue;
        else {
          c++;
          flag = 1;
        }
      } else
        flag = 0;
    }
    (c == 1) ? std::cout << "YES\n" : std::cout << "NO\n";
  }
}
