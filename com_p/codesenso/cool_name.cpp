#include <bits/stdc++.h>
using namespace std;
int ordinal(char c) {
  int ordinal_num = 0;
  switch (c) {
    case 'a': ordinal_num = 1; break;
    case 'b': ordinal_num = 2; break;
    case 'c': ordinal_num = 3; break;
    case 'd': ordinal_num = 4; break;
    case 'e': ordinal_num = 5; break;
    case 'f': ordinal_num = 6; break;
    case 'g': ordinal_num = 7; break;
    case 'h': ordinal_num = 8; break;
    case 'i': ordinal_num = 9; break;
    case 'j': ordinal_num = 10; break;
    case 'k': ordinal_num = 11; break;
    case 'l': ordinal_num = 12; break;
    case 'm': ordinal_num = 13; break;
    case 'n': ordinal_num = 14; break;
    case 'o': ordinal_num = 15; break;
    case 'p': ordinal_num = 16; break;
    case 'q': ordinal_num = 17; break;
    case 'r': ordinal_num = 18; break;
    case 's': ordinal_num = 19; break;
    case 't': ordinal_num = 20; break;
    case 'u': ordinal_num = 21; break;
    case 'v': ordinal_num = 22; break;
    case 'w': ordinal_num = 23; break;
    case 'x': ordinal_num = 24; break;
    case 'y': ordinal_num = 25; break;
    case 'z': ordinal_num = 26; break;
  }
  return ordinal_num;
}
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    char s[101];
    cin >> s;
    int power = 0, len = strlen(s);
    sort(s, s+len);
    for (int i = 0; i < len; i++) {
      power += ((i + 1) * ordinal(s[i]));
    }
    cout << power << endl;
  }
}
