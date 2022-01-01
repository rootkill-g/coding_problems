#include <iostream>
#include <string>
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  long long t = 0;
  std::cin >> t;
  while (t--) {
    long long l = 0;
    std::cin >> l;
    std::string reportemp, report;
    std::cin >> reportemp;
    for (auto ch : reportemp)
      if (ch != '.')
        report += ch;
    bool flag = true;
    long long len = report.size();
    if (report[0] == 'T' || report[len - 1] == 'H')
      flag = false;
    else {
      for (long long i = 0; i < len - 1; i++)
        if (report[i] == report[i + 1])
          flag = false;
    }
    std::cout << (flag ? "Valid\n" : "Invalid\n");
  }
}
