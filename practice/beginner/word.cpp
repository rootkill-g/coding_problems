#include <bits/stdc++.h>

void up(std::string &s) {
  transform(s.begin(), s.end(), s.begin(), ::toupper);
  std::cout << s << std::endl;
}

void low(std::string &s) {
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  std::cout << s << std::endl;
}

int main() {
  std::string s;
  std::cin >> s;
  int upper = 0, lower = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 65 && s[i] <= 90) {
      upper += 1;
    } else if (s[i] >= 97 && s[i] <= 122) {
      lower += 1;
    }
  }
  if (upper > lower) {
    up(s);
  } else {
    low(s);
  }
}
