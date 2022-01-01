#include <bits/stdc++.h>

int main() {
  int n = 0, h = 0, w = 0;
  std::vector<int> a;
  std::cin >> n >> h;
  for (int i = 0; i < n; i++) {
    int x = 0;
    std::cin >> x;
    a.push_back(x);
  }
  for (int i = 0; i < n; i++) {
    if (a[i] > h) {
      w += 2;
    } else {
      w += 1;
    }
  }
  std::cout << w << "\n";
  return 0;
}
