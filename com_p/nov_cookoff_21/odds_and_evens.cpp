#include <iostream>
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
    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << (((a + b) ^ 1) == (a + b + 1) ? "Bob\n" : "Alice\n");
  }
}
