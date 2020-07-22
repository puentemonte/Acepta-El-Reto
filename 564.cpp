/*
Autor: zubest
22/07/2020
Problema: El misterioso caso de los múltiplos de 7
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;
		cout << n / 3 << "\n";
	}
	return 0;
}
