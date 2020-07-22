/*
Autor: zubest
22/07/2020
Problema: Artrópodos
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int seis, ocho, diez, n_escalopendras, n_anillos;
		cin >> seis >> ocho >> diez >> n_escalopendras >> n_anillos;
		cout << (seis*6) + (ocho*8) + (diez*10) + (n_escalopendras*n_anillos*2) << "\n";
	}
	return 0;
}
