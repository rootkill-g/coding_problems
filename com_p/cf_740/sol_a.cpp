#include <bits/stdc++.h>
int test(int x) {
	int z=x;
	std::vector<int> b;
	for (int i = 1; i <= z; i++) {
    if (i % 3 != 0 && i % 10 != 3) {
    	b.push_back(i);
    } else {
			z+=1;
     	continue;
    }
	}
	return b[x - 1];
}
int main() {
	int t = 0;
	std::cin >> t;
	std::vector<int> a;
	for (int i = 0; i < t; i++) {
		int x = 0;
		std::cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < a.size(); i++) {
		std::cout << test(a[i]) << "\n";
	}
}
