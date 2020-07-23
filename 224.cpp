/*
Autor: zubest
22/07/2020
Problema: Los bocadillos de la hormiga reina
*/
#include <bits/stdc++.h>

using namespace std;

bool solve() {
	int n;
	cin >> n;
	if (n == 0)
		return 0;
	vector<int>t;
	for (int i = 0; i < n; ++i) {
		int m;
		cin >> m;
		t.push_back(m);
	}
	int pos = 0;
	bool encontrado = false;
	for (int i = 0; i < n-1; ++i) {
		long long int sum = 0;
		for (int j = i + 1; j < n; ++j) {
			sum += t[j];
			if (sum > t[i])
				break;
		}
		
		if (sum == t[i]) {
			pos = i+1;
			encontrado = true;
			// se sale porque el bocadillo más grande es el i más pequeño
			break;
		}
	}
	if (!encontrado)
		cout << "NO\n";
	else
		cout << "SI " << pos << "\n";
	return 1;
}

int main() {
	while (solve());
	return 0;
}
