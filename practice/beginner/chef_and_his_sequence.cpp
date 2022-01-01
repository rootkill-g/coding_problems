#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, m = 0, j = 0, i = 0;
    std::cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
      std::cin >> a[i];
    std::cin >> m;
    int b[m];
    for (i = 0; i < m; i++)
      std::cin >> b[i];
    for (i = 0, j = 0; i < n && j < m; i++)
      if (a[i] == b[j])
        j++;
    j == m ? std::cout << "Yes\n" : std::cout << "No\n";
  }
}
