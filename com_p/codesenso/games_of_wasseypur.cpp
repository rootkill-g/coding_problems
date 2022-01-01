#include <bits/stdc++.h>
using namespace std;
// long long segregate(char &c, string &s, vector<string> &vec, long long count)
// {
//   long long l = s.size(), counter = 0, x = count;
//   string sub = "";
//   if (c == '0') {
//     for (long long i = x; i < l; i++) {
//       if (s[i] == '1') break;
//       else { x++; counter++; }
//     }
//     for (long long i = 0; i < counter; i++) sub += '0';
//     vec.push_back(sub);
//   } else if (c == '1') {
//     for (long long i = x; i < l; i++) {
//       if (s[i] == '0') break;
//       else { x++; counter++; }
//     }
//     for (long long i = 0; i < counter; i++) sub += '1';
//     vec.push_back(sub);
//   }
//   return x;
// }
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long t = 0;
  cin >> t;
  while (t--) {
    long long n = 0, count = 1;
    cin >> n;
    string str;
    cin >> str;
    char c = str[0];
    for (int i = 0; i < n; i++) {
      if (str[i] != c) {
        c = str[i];
        count++;
      }
    }
    if (count == 1)
      cout << "SAHID" << endl;
    else if (count == 2)
      cout << "RAMADHIR" << endl;
    else {
      if (count % 3 == 0 || count % 3 == 1)
        cout << "SAHID" << endl;
      else
        cout << "RAMADHIR" << endl;
    }
    // vector<string> blocks;
    // while (true) {
    //   if (count == n) break;
    //   if (c == '0') {
    //     count = segregate(c, str, blocks, count);
    //     c = '1';
    //   } else if (c == '1'){
    //     count = segregate(c, str, blocks, count);
    //     c = '0';
    //   }
    // }
    // ans = blocks.size();
    // if (ans % 2 == 0) cout << "RAMADHIR" << endl;
    // else cout << "SAHID" << endl;
  }
}
