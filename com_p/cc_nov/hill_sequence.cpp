#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#define ll long long
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  ll t = 0;
  std::cin >> t;
  while (t--) {
    ll n = 0, temp = 0, flag = 0, len = 0;
    std::map<ll, ll> matrix;
    std::vector<ll> vec;
    std::cin >> n;
    for (ll i = 0; i < n; i++) {
      std::cin >> temp;
      matrix[temp]++;
    }
    for (auto i : matrix) {
      if (i.second > 2) {
        flag = 1;
        break;
      }
      vec.push_back(i.first);
    }
    len = vec.size();
    std::sort(vec.begin(), vec.end());
    if (flag == 1 || matrix[vec[len - 1]] == 2)
      std::cout << "-1";
    else {
      for (ll i = 0; i < len; i++)
        if (matrix[vec[i]] == 2)
          std::cout << vec[i] << " ";
      for (ll i = len - 1; i >= 0; i--)
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
  }
}
