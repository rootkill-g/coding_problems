#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  long long t = 0;
  std::cin >> t;
  while (t--) {
    long long n = 0, b = 0, m = 0, total_time = 0, prob_done = 0;
    std::cin >> n >> b >> m;
    while (n > 1) {
      if (n % 2 == 0) {
        prob_done = n / 2;
        total_time += (prob_done * m) + b;
      } else {
        prob_done = (n + 1) / 2;
        total_time += (prob_done * m) + b;
      }
      m *= 2;
      n -= prob_done;
    }
    total_time += m;
    std::cout << total_time << "\n";
  }
}
