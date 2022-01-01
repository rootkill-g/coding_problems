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
    long long n = 0, count_zeroes = 0, count_ones = 0;
    std::cin >> n;
    std::string str;
    std::cin >> str;
      for (auto c : str) {
        if (c == '0') count_zeroes++;
        else count_ones++;
    }
    if (std::min(count_zeroes, count_ones) == 0)
      std::cout << "Bob\n";
    else if (std::min(count_zeroes, count_ones) == 1)
      std::cout << "Alice\n";
    else {
      if (n % 2)
        std::cout << "Alice\n";
      else
        std::cout << "Bob\n";
    }
  }
}
