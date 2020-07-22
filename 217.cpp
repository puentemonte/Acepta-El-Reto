/*
Autor: zubest
22/07/2020
Problema: ¿Qué lado de la calle?
*/
#include <bits/stdc++.h>

using namespace std;

bool solve() {
	int n;
	cin >> n;
	if (n == 0)
		return 0;
	if (n % 2 == 0)
		cout << "DERECHA\n";
	else
		cout << "IZQUIERDA\n";
	return 1;
}

int main() {
	while (solve());
	return 0;
}
