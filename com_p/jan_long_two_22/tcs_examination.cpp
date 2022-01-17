#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int dragon[3], sloth[3], s_sum = 0, d_sum = 0;
    for (int i = 0; i < 3; i++) {
      std::cin >> dragon[i];
      d_sum += dragon[i];
    }
    for (int i = 0; i < 3; i++) {
      std::cin >> sloth[i];
      s_sum += sloth[i];
    }
    if (s_sum < d_sum)
      std::cout << "DRAGON\n";
    else if (s_sum > d_sum)
      std::cout << "SLOTH\n";
    else {
      if (sloth[0] < dragon[0])
        std::cout << "DRAGON\n";
      else if (sloth[0] > dragon[0])
        std::cout << "SLOTH\n";
      else {
        if (sloth[1] < dragon[1])
          std::cout << "DRAGON\n";
        else if (sloth[1] > dragon[1])
          std::cout << "SLOTH\n";
        else
          std::cout << "TIE\n";
      }
    }
  }
}
