#include <vector>
#include <iostream>
long long solve(long long &n, std::vector<long long> &a) {
  long long x = 0, one = 1;
  for (long long i = 0; i < 64; i++) {
    long long x_or = 0, pow_two = (one << i);
    for (auto &x : a) x_or ^= x;
    if (i == 63 && (x_or & pow_two)) return -1;
    if (x_or & pow_two) {
      x += pow_two;
      for (long long &j : a) j += pow_two;
    }
  }
  return x;
}
int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  long long t = 0;
  std::cin >> t;
  while (t--) {
    long long n = 0;
    std::cin >> n;
    std::vector<long long> a(n);
    for (long long &temp : a) std::cin >> temp;
    std::cout << solve(n, a) << std::endl;
  }
}
