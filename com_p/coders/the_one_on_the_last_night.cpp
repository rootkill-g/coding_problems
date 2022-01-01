#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <vector>
int product_of_digits(std::vector<int> n) {
  int product_of_digits = 1;
  for (auto it : n)
    product_of_digits *= it;
  return product_of_digits;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, k = 0, ans = 0;
    std::cin >> n >> k;
    std::vector<int> all_digits, iterators;
    std::map<int, int> min;
    int x = n, product = 1;
    while (x != 0) {
      int y = x % 10;
      all_digits.push_back(y);
      min[y]++;
      product *= y;
      x /= 10;
    }
    for (auto it = min.begin(); it != min.end(); it++) {
      iterators.push_back(it->second);
    }
    for (auto it : iterators) {
      std::cout << it << " ";
    }
    std::cout << std::endl;
    int len_it = iterators.size();
    for (int i = 0; i < len_it; i++) {
      if (k < 0)
        break;
      for (int j = 0; j < iterators[i]; j++) {
        if (k < 0)
          break;
        for (int l = 0; l < all_digits.size(); l++) {
          if (k < 0)
            break;
          if (all_digits[i] == i + 1) {
            all_digits[i]++;
            k--;
          }
        }
        iterators[i + 1] += iterators[i];
      }
    }
    std::cout << std::endl;
    ans = product_of_digits(all_digits);
    std::cout << "ANS : " << ans << std::endl;
  }
}
