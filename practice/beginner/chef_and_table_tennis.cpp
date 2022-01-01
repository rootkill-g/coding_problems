#include <iostream>
#include <string>
#define WIN std::cout << "WIN\n"
#define LOSE std::cout << "LOSE\n"
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
    std::string scores;
    std::cin >> scores;
    int len = scores.size(), ones = 0, zeroes = 0;
    for (int i = 0; i < len; i++) {
      if (scores[i] == '0')
        zeroes++;
      else
        ones++;
    }
    if (ones == 11 && zeroes < 10)
      WIN;
    else if (zeroes == 11 && ones < 10)
      LOSE;
    else if ((ones - zeroes) == 2 && ones >= 11)
      WIN;
    else
      LOSE;
  }
}
