#include <bits/stdc++.h>
int main() {
	int mat[5][5];
	int h = 0, k = 0, moves = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cin >> mat[i][j];
			if (mat[i][j] == 1) {
				h = i;
				k = j;
			}
		}
	}
	moves = abs(h - 2) + abs(k - 2);
	std::cout << moves << "\n";
}
