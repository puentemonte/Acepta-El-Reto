/*
Autor: zubest
Problema: Poniendo la mesa (515)
*/
#include <iostream>

using namespace std;

int dfs(int n, int t) {
	int sol = 0;
	if (n <= 0)
		sol = 0;
	else {
		if (t == 2) {
			if (n % 2 == 0)
				sol = 1 + dfs(n - 2, 1);
			else
				sol = 1 + dfs(n - 1, 1);
		}

		else
			sol = 1 + dfs(n - 1, 2);
	}
	return sol;
}

int main() {
	int c;
	cin >> c;
	while (c != 0) {
		cout << dfs(c, 1) << "\n";
		cin >> c;
	}
	return 0;
}
