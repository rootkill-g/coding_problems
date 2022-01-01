#include <iostream>
#include <string>
#include <vector>
int ugly(std::string str) {
  int ugliness = 0, len = str.size();
  for (int i = 1; i < len; i++)
    if (str[i] != str[i - 1])
      ugliness++;
  return ugliness;
}
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
    int n = 0, k = 0, l = 1;
    std::cin >> n >> k;
    std::vector<int> ans(k + 1);
    std::string s, temp;
    std::cin >> s;
    while (l <= k) {
      for (int i = 0; i < n; i++) {
        if (s[i] != l) {
          temp += s[i];
          std::cout << temp << " ";
        }
      }
      std::cout << temp << std::endl;
      ans[l] = ugly(temp);
      l++;
    }
    for (auto x : ans)
      std::cout << x << " ";
    std::cout << std::endl;
  }
}
