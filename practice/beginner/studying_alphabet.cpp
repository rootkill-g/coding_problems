#include <iostream>
#include <set>
#include <string>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  std::string s, w;
  std::set<char> letter;
  std::cin >> s;
  for (int i = 0; i < s.length(); i++) letter.insert(s[i]);
  int n = 0;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> w;
    bool flag = false;
    for (int j = 0; j < w.length(); j++) {
      if (letter.find(w[j]) == letter.end()) {
        std::cout << "No" << std::endl;
        flag = true;
        break;
      }
    }
    if (!flag) std::cout << "Yes" << std::endl;
  }
}
