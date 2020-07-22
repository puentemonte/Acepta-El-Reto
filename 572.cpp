/*
Autor: zubest
22/07/2020
Problema: Salvados por el 9
*/
#include <iostream>
using namespace std;
const int mxN = 5;

bool solve() {
	float ar[mxN];
	bool zero = 0, nine = 0;
	for (int i = 0; i < mxN; ++i) {
		cin >> ar[i];
		if (ar[i] == 0)
			zero = 1;
		else if (ar[i] >= 9)
			nine = 1;
	}
	if (zero && !nine)
		return 0;
	else
		return 1;
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		if (solve())
			cout << "MEDIA\n";
		else
			cout << "SUSPENSO DIRECTO\n";
	}
	return 0;
}
