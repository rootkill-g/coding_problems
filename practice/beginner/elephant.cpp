#include <bits/stdc++.h>

int main() {
  long long x = 0, n = 0;
  int s[] = {1, 2, 3, 4, 5};
  std::cin >> x;
  for (int i = 4; i >= 0; i--) {
    if (x % s[i] == 0) {
      n = n + x / s[i];
      break;
    } else {
      while (x > s[i]) {
        n = n + (x / s[i]);
        x = x % s[i];
      }
    }
  }
  std::cout << n << std::endl;
  return 0;
}
