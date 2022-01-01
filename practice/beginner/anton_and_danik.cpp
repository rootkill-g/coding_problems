#include <bits/stdc++.h>

int main() {
  int n = 0, ac = 0, dc = 0;
  std::string wins;
  std::cin >> n >> wins;
  for (int i = 0; i < wins.size(); i++) {
    if (wins[i] == 'A') {
      ac++;
    } else if (wins[i] == 'D') {
      dc++;
    }
  }
  if (ac == dc) {
    std::cout << "Friendship\n";
  } else if (ac > dc) {
    std::cout << "Anton\n";
  } else if (dc > ac) {
    std::cout << "Danik\n";
  }
  return 0;
}
