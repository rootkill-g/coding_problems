#include <iostream>
#include <set>
#include <string>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  std::string str;
  getline(std::cin, str);
  std::set<char> cset;
  for (int i = 1; i < str.length(); i += 3) if (str[i] >= 'a' && str[i] <= 'z') cset.insert(str[i]);
  std::cout << cset.size() << std::endl;
}
