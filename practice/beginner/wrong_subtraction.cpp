#include <bits/stdc++.h>

int main() {
  long long n = 0;
  int k = 0;
  std::cin >> n >> k;
  for (int i = 0; i < k; i++) {
    if (n % 10 == 0) {
      n = n / 10;
    } else {
      n = n - 1;
    }
  }
  std::cout << n << std::endl;
}
