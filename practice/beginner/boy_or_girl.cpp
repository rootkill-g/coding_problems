#include <bits/stdc++.h>

void sex_check(std::string &str) {
  std::vector<char> diff;
  for (int i = 0; i < str.size(); i++) {
    if (std::find(diff.begin(), diff.end(), str[i]) != diff.end()) {
      continue;
    } else {
      diff.push_back(str[i]);
    }
  }
  if (diff.size() % 2 == 0) {
    std::cout << "CHAT WITH HER!" << "\n";
  } else {
    std::cout << "IGNORE HIM!" << "\n";
  }
}

int main() {
  std::string name;
  std::cin >> name;
  sex_check(name);
  return 0;
}
