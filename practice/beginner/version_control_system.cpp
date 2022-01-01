#include <iostream>
#include <vector>
bool find(std::vector<int> &a, int b) {
  for (auto i : a)
    if (i == b)
      return true;
  return false;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, m = 0, k = 0, ans_ti = 0, ans_uu = 0;
    std::cin >> n >> m >> k;
    std::vector<int> a(m), b(k);
    for (int i = 0; i < m; i++)
      std::cin >> a[i];
    for (int i = 0; i < k; i++)
      std::cin >> b[i];
    for (int i = 0; i < m; i++)
      if (find(b, a[i]))
        ans_ti++;
    for (int i = 1; i <= n; i++) {
      if (find(a, i) || find(b, i))
        continue;
      else
        ans_uu++;
    }
    std::cout << ans_ti << " " << ans_uu << std::endl;
  }
}
