#include <bits/stdc++.h>

int main() {
  int n = 0, c = 0;
  scanf("%d", &n);
  while (n--) {
    int p = 0, q = 0;
    scanf("%d %d", &p, &q);
    if (q - p >= 2) {
      c++;
    }
  }
  printf("%d\n", c);
  return 0;
}
