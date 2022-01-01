#include <iostream>
#include <string>
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
    std::string a, b;
    std::cin >> a >> b;
    bool flag = false;
    for (int i = 0; i < a.size(); i++) {
      char c = a[i];
      size_t found = b.find(c);
      if (found != std::string::npos)
        flag = true;
      if (flag)
        break;
    }
    flag ? std::cout << "Yes\n" : std::cout << "No\n";
  }
}
