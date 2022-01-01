#include <iostream>
#include <unordered_map>
int most_frequent_char(char arr[], int n) {
  std::unordered_map<char, int> elements;
  for (int i = 0; i < n; i++) {
    elements[arr[i]]++;
  }
  int maxCount = 0;
  char res;
  for (auto i : elements) {
    if (maxCount < i.second) {
      res = i.first;
      maxCount = i.second;
    }
  }
  return res;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, c = 0;
    std::cin >> n;
    char s[n], freq;
    std::cin >> s;
    freq = most_frequent_char(s, n);
    for (int i = 0; i < n; i++) {
      if (s[i] != freq)
        c++;
    }
    std::cout << c << std::endl;
  }
}
