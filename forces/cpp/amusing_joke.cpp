#include <iostream>
#include <string>
#include <algorithm>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  std::string s1, s2, s3, s4;
  std::cin >> s1 >> s2 >> s3;
  s4 = s1 + s2;
  std::sort(s4.begin(), s4.end());
  std::sort(s3.begin(), s3.end());
  if (s3 == s4) std::cout << "YES" << std::endl;
  else std::cout << "NO" << std::endl;
}
