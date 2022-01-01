#include <bits/stdc++.h>

void swap(unsigned long long int &a, unsigned long long int &b) {
  unsigned long long int temp = a;
  a = b;
  b = temp;
}

int main() {
  unsigned long long int t = 0;
  scanf("%llu", &t);
  while (t--) {
    unsigned long long int n = 0, s = 0;
    scanf("%llu", &n);
    std::vector<unsigned long long int> a(n), b(n);
    for (int i = 0; i < n; i++) {
      scanf("%llu", &a[i]);
    }
    for (int i = 0; i < n; i++) {
      if ((a[i] + i + 1) % 2 != 0) {
        b[i] = 1;
      } else {
        if (i != n - 1) {
          swap(a[i], a[i + 1]);
          if ((a[i] + i + 1) % 2 != 0) {
            b[i] = 1;
          }
          continue;
        }
        continue;
      }
    }
    for (std::vector<unsigned long long int>::iterator itr = b.begin();
         itr != b.end(); ++itr)
      s += *itr;
    printf("%llu\n", s);
  }
}
