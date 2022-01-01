#include <iostream>
#include <string>
typedef long long ll;
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  ll t = 0;
  std::cin >> t;
  while (t--) {
    std::string s;
    std::cin >> s;
    ll len = s.size();
    if (s.length() == 2)
      if (s[0] != s[1])
        std::cout << "YES" << std::endl;
      else
        std::cout << "NO" << std::endl;
    else {
      bool flag = true;

      for (int i = 2; i < s.length(); i++) {
        if (s[i] != s[i - 2] || s[0] == s[1])
          flag = false;
      }
      std::cout << (flag ? "YES" : "NO") << std::endl;
    }
  }
}
