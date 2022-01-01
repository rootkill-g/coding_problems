#include <iostream>
#include <string>
bool is_vowel(char &c) {
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    return true;
  else
    return false;
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, c = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    for (int i = 1; i < n; i++)
      if (!is_vowel(s[i - 1]) && is_vowel(s[i]))
        c++;
    std::cout << c << "\n";
  }
}
