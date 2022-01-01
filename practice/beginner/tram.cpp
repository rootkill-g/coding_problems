#include <bits/stdc++.h>

int main() {
  int n = 0;
  std::cin >> n;
  int get_out = 0, get_in = 0, limit = 0, current = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> get_out >> get_in;
    current = current + get_in - get_out;
    if (current > limit) {
      limit = current;
    }
  }
  std::cout << limit << std::endl;
  return 0;
}
