#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t = 0;
  cin >> t;
  while (t--) {
    ll temp;
    vector<ll> vec;
    while (true) {
      cin >> temp;
      vec.push_back(temp);
      if (cin.peek() == '\n')
        break;
    }
    int len = vec.size() - 1;
    sort(vec.begin(), vec.end(), greater<ll>());
    if (vec[0] == len)
      std::cout << vec[1] << endl;
    else
      cout << vec[0] << endl;
  }
}
