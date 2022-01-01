#include <iostream>
int largest_power(long long int &n) {
  int lp = 1;
  while (lp * 2 <= n) lp *= 2;
  return lp;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    long long int n = 0;
    std::cin >> n;
    int lp = largest_power(n);
    int llp = lp / 2;
    int possibility_1 = n - lp + 1, possibility_2 = lp - llp;
    std::cout << std::max(possibility_1, possibility_2) << std::endl;
  }
}
