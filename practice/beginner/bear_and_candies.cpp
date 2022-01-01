#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int a = 0, b = 0, limak = 0, bob = 0, c = 0;
    std::cin >> a >> b;
    while (limak <= a && bob <= b) {
      c++;
      limak += c;
      c++;
      bob += c;
    }
    if (limak > a && bob > b) std::cout << "Bob" << std::endl;
    else if (limak > a) std::cout << "Bob" << std::endl;
    else std::cout << "Limak" << std::endl;
  }
}
