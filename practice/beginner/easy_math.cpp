#include <iostream>
#include <vector>
int sum_of_digits(int a) {
  int sum = 0;
  while (a > 0) {
    sum += a % 10;
    a /= 10;
  }
  return sum;
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
    int n = 0, max = -1;
    std::cin >> n;
    std::vector<int> a(n), sd;
    for (int i = 0; i < n; i++)
      std::cin >> a[i];
    for (int i = 0; i < n - 1; i++)
      for (int j = i + 1; j < n; j++)
        sd.push_back(a[i] * a[j]);
    for (auto i : sd) {
      int temp = sum_of_digits(i);
      if (temp > max)
        max = temp;
    }
    std::cout << max << '\n';
  }
}
