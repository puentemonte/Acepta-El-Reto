// Autor: zubest
// Problema: La lotería de la peña Atlética
#include <bits/stdc++.h>

using namespace std;

int solve() {
	int s = 0, m, a;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> a;
		if (a % 2 == 0)
			++s;
	}
	return s;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cout << solve() << endl;
	return 0;
}
