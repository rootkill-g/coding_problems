#include <bits/stdc++.h>

int main() {
  char sum[100];

  std::cin >> sum;

  int l = strlen(sum), one = 0, two = 0, three = 0;
  if (l == 1) {
    std::cout << sum << "\n";
    return 0;
  }

  // Strore the number of numbers
  for (int i = 0; i < l; i++) {
    if (sum[i] == '+') {
      continue;
    }
    if (sum[i] == '1') {
      one++;
    } else if (sum[i] == '2') {
      two++;
    } else if (sum[i] == '3') {
      three++;
    }
  }

  // Putting the result on OUTPUT STREAM
  for (int i = 0; i < one; i++) {
    std::cout << '1';
    if ((two == 0 & three == 0) && i == one - 1) {
      std::cout << std::endl;
    } else {
      std::cout << '+';
    }
  }
  for (int i = 0; i < two; i++) {
    std::cout << '2';
    if (i == two - 1 & three == 0) {
      std::cout << std::endl;
    } else {
      std::cout << '+';
    }
  }
  for (int i = 0; i < three; i++) {
    std::cout << '3';
    if (i == three - 1) {
      std::cout << std::endl;
    } else {
      std::cout << '+';
    }
  }
  return 0;
}
