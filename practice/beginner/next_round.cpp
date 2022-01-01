#include<bits/stdc++.h>

int main() {
	int n = 0, k = 0, threshold = 1, res = 0;
	std::vector<int> scores;
	std::cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int temp = 0;
		std::cin >> temp;
		if (i == k-1 && temp != 0) {
			threshold = temp;
		}
		scores.push_back(temp);
	}
	for (int i = 0; i < n; i++) {
		if (scores[i] >= threshold) {
			res++;
		} else {
			continue;
		}
	}
	std::cout << res << std::endl;
	return 0;
}
