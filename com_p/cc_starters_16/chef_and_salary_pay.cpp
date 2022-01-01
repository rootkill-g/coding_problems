#include <iostream>
int main() {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    std::string s;
    int x = 0, y = 0, c = 0, max_streak = 0, temp = 0, total_salary = 0;
    std::cin >> x >> y >> s;
    for (int i = 0; i < 30; i++) {
      if (s[i] == '1') {
        c++;
        temp++;
      }
      if (max_streak < temp)
        max_streak = temp;
      if (s[i] == '0')
        temp = 0;
    }
    total_salary = (c * x) + (max_streak * y);
    std::cout << total_salary << std::endl;
  }
}
