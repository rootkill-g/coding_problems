#include <bits/stdc++.h>

int Ops(int K, std::string S) {
  int O = 0, L = S.size(), x = 0;
  for (int i = 0; i < L / 2; i++) {
    if (S[i] != S[L - i - 1]) {
      x += 1;
    } else {
      continue;
    }
  }
  if (x == K) {
    O = 0;
  } else if (x > K) {
    O = x - K;
  } else if (x < K) {
    O = K - x;
  }
  return O;
}

int main() {
  int T = 0;
  scanf("%d", &T);
  for (int i = 1; i <= T; i++) {
    int N = 0, K = 0, O = 0;
    std::cin >> N >> K;
    std::string S = "";
    std::cin >> S;
    O = Ops(K, S);
    printf("Case #%d: %d\n", i, O);
  }
}
