#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long t = 0;
  cin >> t;
  while (t--) {
    long long n = 0, bwa = 0;
    cin >> n;
    long long a[n] = {0};
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 2; i++) bwa += (a[i] & a[i + 1]);
    cout << bwa << endl;
  }
}
