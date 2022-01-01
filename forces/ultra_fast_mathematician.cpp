#include <iostream>
#include <cstring>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  char a[101] = {0}, b[101] = {0};
  std::cin >> a >> b;
  int l = std::strlen(a);
  char c[l] = {0};
  for (int i = 0; i < l; i++) {
    if (a[i] == b[i]) c[i] = '0';
    else c[i] = '1';
  }
  for (int i = 0; i < l; i++) std::cout << c[i];
  std::cout << std::endl;
}
