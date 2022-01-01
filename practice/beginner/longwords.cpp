#include<bits/stdc++.h>

int funk(std::string str) {
	int len = str.size();
	char first_letter = str[0];
	char last_letter = str[len - 1];
	std::cout << first_letter << len - 2 << last_letter << std::endl;
	return 0;
}

int main() {
	int times;
	std::string str;
	std::cin >> times;
	for (int i = 0; i < times; i++) {
		std::cin >> str;
		if (str.size() <= 10) {
			std::cout << str << std::endl;
		} else {
			funk(str);
		}
	}
	return 0;
}
