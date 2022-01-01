#include <iostream>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int months = 0, price_petrol = 0, price_diesel = 0, rate_petrol = 0,
        rate_diesel = 0;
    std::cin >> price_petrol >> price_diesel >> rate_petrol >> rate_diesel >>
        months;
    for (int i = 0; i < months; i++) {
      price_petrol += rate_petrol;
      price_diesel += rate_diesel;
    }
    if (price_petrol < price_diesel)
      std::cout << "PETROL" << std::endl;
    else if (price_petrol > price_diesel)
      std::cout << "DIESEL" << std::endl;
    else
      std::cout << "SAME PRICE" << std::endl;
  }
}
