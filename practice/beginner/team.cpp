#include<bits/stdc++.h>

int main() {
	int n = 0, res = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int p = 0, v = 0, t = 0;
		std::cin >> p >> v >> t;
		if (p + v + t >= 2) {
			res += 1;
		} else {
			continue;
		}
	}
	std::cout << res << std::endl;
	return 0;
}
