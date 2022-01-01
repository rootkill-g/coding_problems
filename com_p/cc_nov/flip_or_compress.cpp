#include <bits/stdc++.h>
using namespace std;
long long segregate(char &c, string &s, vector<string> &vec, long long count) {
  long long l = s.size(), counter = 0, x = count;
  string sub = "";
  if (c == '0') {
    for (long long i = x; i < l; i++) {
      if (s[i] == '1')
        break;
      else {
        x++;
        counter++;
      }
    }
    for (long long i = 0; i < counter; i++)
      sub += '0';
    vec.push_back(sub);
  } else if (c == '1') {
    for (long long i = x; i < l; i++) {
      if (s[i] == '0')
        break;
      else {
        x++;
        counter++;
      }
    }
    for (long long i = 0; i < counter; i++)
      sub += '1';
    vec.push_back(sub);
  }
  return x;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long t = 0;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    char c = s[0];
    long long n = s.size(), count = 0;
    vector<string> blocks;
    while (true) {
      if (count == n)
        break;
      if (c == '0') {
        count = segregate(c, s, blocks, count);
        c = '1';
      } else if (c == '1') {
        count = segregate(c, s, blocks, count);
        c = '0';
      }
    }
    for (int i = 0; i < blocks.size(); i++) {
      cout << blocks[i] << endl;
    }
  }
}
