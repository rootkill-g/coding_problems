#include <algorithm>
#include <iostream>
#include <string>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    std::string dish_1[4], dish_2;
    int c = 0;
    for (int i = 0; i < 4; i++)
      std::cin >> dish_1[i];
    for (int i = 0; i < 4; i++) {
      std::cin >> dish_2;
      auto it = std::find(dish_1, dish_1 + 4, dish_2);
      if (it != dish_1 + 4)
        c++;
    }
    c >= 2 ? std::cout << "similar\n" : std::cout << "dissimilar\n";
  }
}
