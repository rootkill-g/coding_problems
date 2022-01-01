#include <bits/stdc++.h>

int main() {
	int X = 0, n = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::string cmd = "";
		std::cin >> cmd;
		if (cmd[0] == '+' || cmd[cmd.size() - 1] == '+') {
			X++;
		} else if (cmd[0] == '-' ||  cmd[cmd.size() - 1] == '-') {
			X--;
		}
	}
	std::cout << X << std::endl;
	return 0;
}
