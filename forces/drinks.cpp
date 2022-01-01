#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  long long n = 0, prop = 0;
  long double drink = 0.0;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> prop;
    drink += prop;
  }
  printf("%Lf\n", (drink / n));
}
