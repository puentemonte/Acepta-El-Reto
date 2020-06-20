// autor: zubest
#include <iostream>

using namespace std;

int main() {
	int e, i;
	cin >> e >> i;
	while (e != 0 || i != 0) {
		if (e >= i)
			cout << "CUERDO\n";
		else
			cout << "SENIL\n";
		cin >> e >> i;
	}
	return 0;
}
