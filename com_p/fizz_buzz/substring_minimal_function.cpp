#include <iostream>
#include <unordered_set>
typedef long long ll;
using namespace std;
ll segregate(char &c, string &s, unordered_set<string> &vec, ll count) {
  ll l = s.size(), counter = 0, x = count;
  string sub = "";
  if (c == '0') {
    for (ll i = x; i < l; i++) {
      if (s[i] == '1')
        break;
      else {
        x++;
        counter++;
      }
    }
    for (ll i = 0; i < counter; i++)
      sub += '0';
    vec.insert(sub);
  } else if (c == '1') {
    for (ll i = x; i < l; i++) {
      if (s[i] == '0')
        break;
      else {
        x++;
        counter++;
      }
    }
    for (ll i = 0; i < counter; i++)
      sub += '1';
    vec.insert(sub);
  }
  return x;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0, m = 0;
    unordered_set<string> zeroes;
  }
}
