#include <bits/stdc++.h>

long long int same_elements(std::vector<long long int> &a, long long int &t) {
  for (int i = 0; i < a.size(); i++) {
  }
  return t;
}

int main() {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    long long int n = 0, x = 0, c = 0, s = 0, t = 0;
    scanf("%llu %llu", &n, &x);
    std::vector<long long int> a(n), b(n);
    for (int i = 0; i < n; i++) {
      scanf("%llu", &a[i]);
      if (a[i] ^ x) {
        std::cout << "Special : " << (a[i] ^ x) << std::endl;
        a[i] += x;
        c++;
        t = a[i];
      }
    }
    s = same_elements(a, t);
    printf("%llu %llu\n", s, c);
  }
}
