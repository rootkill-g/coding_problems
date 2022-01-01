#include <iostream>
#include <string>
#include <unordered_map>
typedef long long ll;
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    string first_name[n], last_name[n];
    unordered_map<string, int> names;
    for (ll i = 0; i < n; i++) {
      string fname, lname;
      cin >> fname >> lname;
      first_name[i] = fname;
      last_name[i] = lname;
      names[first_name[i]]++;
    }
    for (ll i = 0; i < n; i++) {
      if (names[first_name[i]] == 1)
        cout << first_name[i] << endl;
      else
        cout << first_name[i] << " " << last_name[i] << endl;
    }
  }
}
