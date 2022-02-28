#include <bits/stdc++.h>

#define MOD 1000000007
#define ll long long int

using namespace std;

signed main() {
  ll i, t, n, g;
  vector<ll> dp(1000003, 0);

  dp[0] = 1;
  dp[1] = 1;

  for (i = 2; i <= 1000000; ++i) {
    dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
  }

  scanf("%lld", &t);

  while (t--) {
    scanf("%lld%lld", &n, &g);

    if (__builtin_popcountll(dp[n]) == g) {
      printf("CORRECT\n");
    } else {
      printf("INCORRECT\n");
    }
  }
}
