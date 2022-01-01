#include <bits/stdc++.h>

int main() {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (((a + b <= d) && c <= e) || ((a + c <= d) && b <= e) ||
        ((b + c <= d) && a <= e)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}
