#include <bits/stdc++.h>

int main() {
  long long k = 0, n = 0, w = 0, t = 0;
  std::cin >> k >> n >> w;
  for (int i = 1; i <= w; i++) {
    t += i * k;
  }
  if (n > t) {
    std::cout << "0\n";
  } else {
    std::cout << t - n << "\n";
  }
  return 0;
}
