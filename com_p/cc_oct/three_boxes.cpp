#include <iostream>
int main(void) {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a + b + c <= d)
      printf("1\n");
    else if ((a + b <= d || a + c <= d || b + c <= d) && (a + b + c > d))
      printf("2\n");
    else
      printf("3\n");
  }
}
