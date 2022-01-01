#include <iostream>
#define ll unsigned long long int
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  while (true) {
    ll n = 0, flag = 0;
    std::cin >> n;
    ll arr[n];
    if (n == 0) break;
    for (ll i = 0; i < n; i++)
      std::cin >> arr[i];
    for (ll i = 0; i < n; i++) {
      if (arr[arr[i] - 1] != i + 1) {
        flag = 1;
        break;
      }
    }
    std::cout << (flag == 1 ? "not ambiguous" : "ambiguous") << std::endl;
  }
}
