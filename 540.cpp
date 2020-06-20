// autor: zubest
#include <iostream>

using namespace std;

int main() {

	int casos, piso, escalones, pisos_completos, escalones_extra;

	cin >> casos;
	for (int i = 0; i < casos; ++i) {
		cin >> piso >> escalones >> pisos_completos >> escalones_extra;
		cout << ((pisos_completos * escalones) + escalones_extra) << " " << ((pisos_completos * escalones) + escalones_extra) + (piso * escalones) << endl;
	}

	return 0;
}
