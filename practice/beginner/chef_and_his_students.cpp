#include <iostream>
#include <string>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t = 0;
  cin >> t;
  while (t--) {
    string s1, s2;
    std::cin >> s1;
    int len = s1.size(), c = 0;
    for (int i = 0; i < len; i++) {
      if (s1[i] == '<')
        s2 += '>';
      else if (s1[i] == '>')
        s2 += '<';
      else
        s2 += '*';
    }
    len = s2.size();
    for (int i = 0; i < len - 1; i++) {
      if (s2[i] == '>' && s2[i + 1] == '<')
        c++;
    }
    cout << c << endl;
  }
}
