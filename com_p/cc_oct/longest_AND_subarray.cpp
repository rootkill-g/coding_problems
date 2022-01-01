#include <stdio.h>
int main(void) {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    long long n = 0, l = 0, ans = 1;
    scanf("%lld", &n);
    for (long long i = 1; i < n; i++) {
      if ((i & (i + 1)) <= 0)
        l = 0;
      l++;
      if (ans < l)
        ans = l;
    }
    printf("%lld\n", ans);
  }
}
