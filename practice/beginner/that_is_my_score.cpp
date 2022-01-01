#include <iostream>
#include <algorithm>
#include <vector>
int main() {
  #ifndef ONLINE_JUDGE
    freopen("intput.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0, total_score = 0;
    std::cin >> n;
    std::vector<std::pair<int, int>> prob_scores, top_scores;
    for (int i = 0; i < n; i++) {
      int prob = 0, score = 0;
      std::cin >> prob >> score;
      prob_scores.push_back(std::make_pair(prob, score));
    }
    for (auto i = prob_scores.begin(); i != prob_scores.end(); i++) {
      if (i->first >= 1 && i->first <= 8) {
        auto it = std::find_if(top_scores.begin(), top_scores.end(), [&i](const std::pair<int, int> x){return x.first == i->first;});
        if (it != top_scores.end())
          if (it->second < i->second)
            it->second = i->second;
        else top_scores.push_back(std::make_pair(i->first, i->second));
      }
    }
    for (auto i = top_scores.begin(); i != top_scores.end(); i++)
      total_score += i->second;
    std::cout << total_score << "\n";
  }
}
