#include <bits/stdc++.h>

typedef long long ll;

int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    ll n;
    scanf("%lld", &n);
    printf("%lld %lld\n", (-n + 1), n);
  }
}
