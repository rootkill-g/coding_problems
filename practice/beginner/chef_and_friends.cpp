#include <bits/stdc++.h>
typedef long long ll;
bool sub_in_str(std::string str, std::vector<std::string> &sub_str) {
  for (auto sub : sub_str) {
    size_t found = str.find(sub);
    if (found != std::string::npos)
      return true;
  }
  return false;
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  ll t = 0, c = 0;
  std::cin >> t;
  std::string names[t];
  std::vector<std::string> subs = {"chef", "che", "ch", "he", "ef", "hef"};
  bool flag = false;
  for (int i = 0; i < t; i++) {
    std::cin >> names[i];
    if (sub_in_str(names[i], subs))
      c++;
  }
  std::cout << c << std::endl;
}
