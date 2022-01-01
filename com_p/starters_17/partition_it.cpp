#include <iostream>
#include <vector>

const int MAX = 1e5 + 5;
bool prime[MAX];
int spf[MAX];

void sieve_of_eratosthenes() {
  std::fill(prime, prime + MAX, true);
  for (int i = 0; i < MAX; i++)
    spf[i] = i;
  prime[0] = prime[1] = false;
  for (int i = 2; i * i < MAX; i++)
    if (prime[i])
      for (int j = i * i; j < MAX; j += i) {
        if (prime[j])
          spf[j] = i;
        prime[j] = false;
      }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  sieve_of_eratosthenes();
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, k = 0;
    std::cin >> n >> k;
    std::vector<int> v1, v2{1};
    long long c1 = 0, c2 = 1;
    for (int i = 2; i <= n; i++) {
      if (!prime[i]) {
        c1++;
        v1.push_back(i);
        continue;
      } else {
        if (i * 2 <= n) {
          c1++;
          v1.push_back(i);
        } else {
          c2++;
          v2.push_back(i);
        }
      }
    }
    if (k <= c2 || k >= c1) {
      std::cout << "Yes\n";
      if (k <= c2)
        for (int i = 0; i < k; i++)
          std::cout << v2[i] << " ";
      else {
        for (auto x : v1)
          std::cout << x << " ";
        for (int i = 0; i < k - c1; i++)
          std::cout << v2[i] << " ";
      }
      std::cout << "\n";
    } else
      std::cout << "No\n";
  }
}
