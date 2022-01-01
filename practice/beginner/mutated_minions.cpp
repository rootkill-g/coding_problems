#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, k = 0, minion_dna = 0, wolverine = 0;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
      std::cin >> minion_dna;
      if ((minion_dna += k) % 7 == 0 ) wolverine++;
    }
    std::cout << wolverine << std::endl;
  }
}
