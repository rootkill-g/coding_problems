#include <iostream>

int main(void) {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    if (b == 0 && a != 0)
      printf("Solid\n");
    if (a == 0 && b != 0)
      printf("Liquid\n");
    if (a > 0 && b > 0)
      printf("Solution\n");
  }
}
