#include <iostream>
int gcd(int h, int k) {
    while(k != 0){
        int temp = k;
        k = h % k;
        h = temp;
    }
    return h;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, cd = 0;
    std::cin >> n;
    int ingredients[n];
    for (int i = 0; i < n; i++) {
      std::cin >> ingredients[i];
    }
    cd = gcd(ingredients[0], ingredients[1]);
    for (int i = 2; i < n; i++) {
      cd = gcd(cd, ingredients[i]);
    }
    for (int i = 0; i < n; i++) {
      std::cout << ingredients[i] / cd << " ";
    }
    std::cout << std::endl;
  }
}
