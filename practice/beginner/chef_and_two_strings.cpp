#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int min_diff = 0, max_diff = 0, str_len = 0;
    std::string s1, s2;
    std::cin >> s1 >> s2;
    str_len = s1.size();
    for (int i = 0; i < str_len; i++) {
      if (s1[i] == '?' || s2[i] == '?')
        max_diff++;
      else if (s1[i] != s2[i]) {max_diff++; min_diff++;}
    }
    std::cout << min_diff << " " << max_diff << std::endl;
  }
}
