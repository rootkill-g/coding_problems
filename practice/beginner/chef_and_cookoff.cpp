#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0;
  std::cin >> n;
  while (n--) {
    int c = 0, a[5] = {0};
    for (int i = 0; i < 5; i++) {
      std::cin >> a[i];
      if (a[i] == 1) c++;
    }
    switch (c) {
      case 0: std::cout << "Beginner" << std::endl; break;
      case 1: std::cout << "Junior Developer" << std::endl; break;
      case 2: std::cout << "Middle Developer" << std::endl; break;
      case 3: std::cout << "Senior Developer" << std::endl; break;
      case 4: std::cout << "Hacker" << std::endl; break;
      default: std::cout << "Jeff Dean" << std::endl; break;
    }
  }
}
