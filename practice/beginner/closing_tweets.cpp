#include <iostream>
int main() {
  int n = 0, k = 0;
  std::cin >> n >> k;
  int tweets[n] = {0};
  while (k--) {
    std::string command;
    int number = 0, total_open = 0;
    std::cin >> command;
    if (command == "CLOSEALL") {
      for (int i = 0; i < n; i++)
        tweets[i] = 0;
    } else {
      std::cin >> number;
      if (tweets[number - 1] == 0) tweets[number - 1] = 1;
      else tweets[number - 1] = 0;
    }
    for (int i = 0; i < n; i++)
      total_open += tweets[i];
    std::cout << total_open << std::endl;
  }
}
