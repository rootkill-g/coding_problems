#include <iostream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long  t = 0;
  cin >> t;
  while (t--) {
    long long n = 0, min = 1e6;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
      cin >> arr[i];
      if (min > arr[i]) min = arr[i];
    }
    cout << min * (n - 1) << "\n";
  }
}
