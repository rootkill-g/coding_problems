#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int M = 0, x = 0, y = 0, safe_houses = 0;
    std::cin >> M >> x >> y;
    int cops_in_tha_houses[M] = {0}, rate = x * y;
    for (int i = 0; i < M; i++)
      std::cin >> cops_in_tha_houses[i];
    for (int i = 1; i <= 100; i++) {
      bool flag = true;
      for (int j = 0; j < M; j++) {
        int first_house = cops_in_tha_houses[j] - rate;
        int last_house = cops_in_tha_houses[j] + rate;
        if (i >= first_house && i <= last_house) flag = false;
      }
      if (flag) safe_houses++;
    }
    std::cout << safe_houses << std::endl;
  }
}
