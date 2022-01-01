#include <iostream>
#include <vector>
bool in_level(std::vector<int> arr, int n) {
  for (auto it: arr)
    if (it == n) return true;
  return false;
} 
std::vector<int> take_q(int &q, int &n, int &temp, std::vector<int> &ans) {
  std::cin >> q;
  for (int i = 0; i < q; i++) {
    std::cin >> temp;
    if (!in_level(ans, temp)) ans.push_back(temp); 
  }
  return ans;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n = 0, p = 0, q = 0, temp = 0;
  std::cin >> n >> p;
  std::vector<int> ans;
  if (p == 0 && n != 0) take_q(q, n, temp, ans);
  else if (p == 0 && n == 0) {
    std::cout << "I become the guy.\n";
    return 0;
  }
  else {
    for (int i = 0; i < p; i++) {
      std::cin >> temp;
      if (!in_level(ans, temp)) ans.push_back(temp);
    }
    take_q(q, n, temp, ans);
  }
  if (ans.size() == n) std::cout << "I become the guy.\n";
  else std::cout << "Oh, my keyboard!\n";
}
