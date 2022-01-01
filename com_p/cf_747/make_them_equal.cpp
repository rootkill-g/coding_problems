#include <iostream>
#include <string>
#include <vector>

int main() {
  int t = 0;
  scanf("%d", &t);

  while (t--) {
    int n = 0, count = 0;
    char c = '\0';
    scanf("%d %c", &n, &c);

    std::string s;
    std::cin >> s;

    std::vector<int> ans;
    bool ok = true;

    for (auto x : s) {
      if (x != c)
        ok = false;
    }

    if (!ok) {
      for (int i = 1; i < n + 1; i++) {
        ok = true;
        for (int j = i; j < n + 1; j++) {
          ok &= (s[j - 1] == c);
          j += i - 1;
        }
        if (ok) {
          ans.push_back(i);
          break;
        }
      }
      if (!ok) {
        ans.push_back(n);
        ans.push_back(n - 1);
      }
    }
    std::cout << ans.size() << "\n";
    for (auto x : ans)
      std::cout << x << " ";
    std::cout << "\n";
  }
}
