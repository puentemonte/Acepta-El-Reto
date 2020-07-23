// Autor: zubest
// Problema: El burro y las alforjas

#include <bits/stdc++.h>

using namespace std;
// ordenar vector
// contar si hay dos números seguidos

int resolve() {
	vector<int>p;
	int b, s;
	cin >> b >> s;
	for (int i = 0; i < s; ++i) {
		int m;
		cin >> m;
		p.push_back(m);
	}
	sort(p.begin(), p.end());
	int ind = 0, ans = 0;
	while (ind < s - 1 && ans < b) {
		if (p[ind] == p[ind + 1]) {
			++ans;
			++ind;
		}
		++ind;
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cout << resolve() << "\n";
	}
	return 0;
}
