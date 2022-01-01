#include <iostream>
#define fast_io std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
int squared_distance(int x1, int y1, int x2, int y2) {
  return ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main() {
  fast_io;
  int t = 0;
  std::cin >> t;
  while (t--) {
    int r = 0, x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0, c = 0;
    std::cin >> r >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (squared_distance(x1, y1, x2, y2) <= r * r) c++;
    if (squared_distance(x1, y1, x3, y3) <= r * r) c++;
    if (squared_distance(x2, y2, x3, y3) <= r * r) c++;
    if (c >= 2)
      std::cout << "yes" << std::endl;
    else
      std::cout << "no" << std::endl;
  }
}
