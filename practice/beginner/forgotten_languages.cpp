#include <iostream>
#include <map>
#include <string>
#include <vector>
int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, k = 0, l = 0;
    std::map<std::string, int> match;
    std::string s_l;
    std::cin >> n >> k;
    std::vector<std::string> word(n);
    for (int i = 0; i < n; i++)
      std::cin >> word[i];
    while (k--) {
      std::cin >> l;
      for (int j = 0; j < l; j++) {
        std::cin >> s_l;
        match[s_l]++;
      }
    }
    for (int i = 0; i < n; i++)
      match[word[i]] ? std::cout << "YES " : std::cout << "NO ";
    std::cout << std::endl;
  }
}
