#include <bits/stdc++.h>

int main() {
	std::string one, two;
	int len = 0;
	std::cin >> one >> two;
	transform(one.begin(), one.end(), one.begin(), ::tolower);
	transform(two.begin(), two.end(), two.begin(), ::tolower);
	if (one.size() < two.size()) {
		len = one.size();
	} else {
		len = two.size();
	}
	for (int i = 0; i < len; i++) {
		if (one[i] < two[i]) { std::cout << "-1\n"; break; }
		if (one[i] > two[i]) { std::cout << "1\n"; break; }
		if (one[i] == two[i] && i == len - 1) {
			std::cout << "0\n";
			break;
		} else {
			continue;
		}
	}
}
