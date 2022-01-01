#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  char c;
  std::cin >> c;
  if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    std::cout << "Vowel\n";
  else
    std::cout << "Cosonant\n";
}
