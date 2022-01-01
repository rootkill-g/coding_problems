#include <iostream>
#include <string>
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
    std::string log;
    std::cin >> log;
    int len_log = log.size(), flag = 1;
    for (int i = 0; i < len_log; i += 2)
      if (log[i] == log[i + 1]) flag = 0;
    (flag == 1) ? std::cout << "yes\n" : std::cout << "no\n";
  }
}
