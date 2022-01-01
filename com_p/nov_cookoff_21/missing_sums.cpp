#include <iostream>
#include <vector>
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, i = 1;
    std::cin >> n;
    std::vector<int> a;
    int len = a.size();
    while (len != n) {
      a.push_back(i);
      len = a.size();
      i += 2;
    }
    for (int j = 0; j < len; j++) {
      if (j == len - 1)
        std::cout << a[j] << std::endl;
      else
        std::cout << a[j] << " ";
    }
  }
}
