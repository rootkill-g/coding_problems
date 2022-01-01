#include <bits/stdc++.h>

int main() {
  int n = 0, c = 0, m = 0;

  scanf("%d", &n);

  while (n > 0) {

    int r = n % 2;

    if (r == 1) {
      c++;
    } else {
      c = 0;
    }
    m = (c > m) ? c : m;
    n /= 2;
  }
  printf("%d\n", m);
}
