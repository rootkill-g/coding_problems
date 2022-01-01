#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
long long get_inversions(std::string &s) {
  long long inversions = 0, ones = 0;
  for (char c : s) {
    if (c == '1') ones++;
    else inversions += ones;
  }
  return inversions;
}
bool cmp(std::string &s_1, std::string &s_2) {
  return count(begin(s_1), end(s_1), '1') < count(begin(s_2), end(s_2), '1');
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
    int n = 0, m = 0;
    std::cin >> n >> m;
    std::vector<std::string> s(n);
    for (std::string &s_temp : s) std::cin >> s_temp;
    std::sort(begin(s), end(s), cmp);
    std::string new_string;
    for (std::string &s_temp : s) new_string += s_temp;
    std::cout << get_inversions(new_string) << '\n';
  }
}
