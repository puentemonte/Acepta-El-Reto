// autor: zubest
#include <iostream>
using namespace std;

const int mxD = 50;
typedef int tArray[mxD][mxD];
typedef struct {
	int d;
	tArray m;
}tCaso;

bool funcion(const tCaso &c) {
	bool es = true;
	int i = 0, j = 0;
	while (es && i < c.d) {
		j = 0;
		while (es && j < c.d) {
			if (i == j) {
				if (c.m[i][j] != 1)
					es = false;
			}
			else {
				if (c.m[i][j] != 0)
					es = false;
			}
			++j;
		}
		++i;
	}
	return es;
}

bool resolver() {
	tCaso caso;
	cin >> caso.d;
	if (caso.d == 0)
		return 0;
	for (int i = 0; i < caso.d; ++i)
		for (int j = 0; j < caso.d; ++j)
			cin >> caso.m[i][j];
	bool es = funcion(caso);
	if (es)
		cout << "SI\n";
	else
		cout << "NO\n";
	return 1;
}

int main() {
	while (resolver());
	return 0;
}

(c) Acepta el reto, 2013 - 
