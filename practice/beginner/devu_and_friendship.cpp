#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, c = 0, temp = 0;
    std::cin >> n;
    int d[101] = {0};
    for (int i = 0; i < n; i++) {
      std::cin >> temp;
      d[temp]++;
    }
    for (int i = 0; i <= 100; i++) {
      if (d[i] != 0)
        c++;
    }
    std::cout << c << std::endl;
  }
}
