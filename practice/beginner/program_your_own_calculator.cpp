#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  char c;
  double a = 0.0, b = 0.0, res = 0.0;
  scanf("%lf\n%lf\n%c", &a, &b, &c);
  if (c == '+')
    res = a + b;
  else if (c == '-')
    res = a - b;
  else if (c == '*')
    res = a * b;
  else if (c == '/')
    res = a / b;
  printf("%f\n", res);
}
