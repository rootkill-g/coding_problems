#include <iostream>
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  long long t = 0;
  std::cin >> t;
  while (t--) {
    long long n = 0, max_elem = -1e5, min_elem = 1e5, input;
    std::cin >> n;
    for (long long i = 0; i < n; i++) {
      std::cin >> input;
      if (input > max_elem)
        max_elem = input;
      if (input < min_elem)
        min_elem = input;
    }
    std::cout << max_elem - min_elem << std::endl;
  }
}
