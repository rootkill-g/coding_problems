#include <bits/stdc++.h>

void check_opposite_to_c() {
	int a = 0, b = 0, c = 0;
	std::cin >> a >> b >> c;
	int temp = 2 * std::abs(a - b);
	if (a > temp || b > temp || c > temp) {
		std::cout << "-1\n";
		return;
	}
	std::cout << (temp / 2 + c - 1) % temp + 1 << "\n";
}

int main() {
	int test_cases = 0;
	std::cin >> test_cases;
	for (int i = 0; i < test_cases; i++) {
		check_opposite_to_c();
	}
	return 0;
}
