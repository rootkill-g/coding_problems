#include <bits/stdc++.h>
void cap(std::string &str) {
  str[0] = toupper(str[0]);
  std::cout << str << "\n";
}
int main() {
  std::string word;
  getline(std::cin, word);
  cap(word);
  return 0;
}
