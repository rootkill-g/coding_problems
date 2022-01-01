#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int n = 0, x = 0, p = 0, total = 0;
    scanf("%d %d %d", &n, &x, &p);
    total = 3 * x - (n - x);
    if (total >= p) {
      printf("PASS\n");
    } else {
      printf("FAIL\n");
    }
  }
}
