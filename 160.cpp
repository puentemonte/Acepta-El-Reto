// autor: zubest
#include <iostream>
using namespace std;

const int mxD = 50;
typedef int tArray[mxD][mxD];
typedef struct {
	int d;
	tArray m;
}tCaso;

bool checkUp(const tCaso &c) {
	bool is = true;
	int j = 0, i = 0;
	while (is && i < c.d - 1) {
		j = i + 1;
		while (is && j < c.d) {
			if (c.m[i][j] != 0)
				is = false;
			++j;
		}
		++i;
	}
	return is;
}

bool checkDown(const tCaso& c) {
	bool is = true;
	int i = 0, j = 0;
	while (is && j < c.d - 1) {
		i = j + 1;
		while (is && i < c.d) {
			if (c.m[i][j] != 0)
				is = false;
			++i;
		}
		++j;
	}
	return is;
}

bool resolver() {
	tCaso caso;
	cin >> caso.d;
	if (caso.d == 0)
		return 0;
	for (int i = 0; i < caso.d; ++i)
		for (int j = 0; j < caso.d; ++j)
			cin >> caso.m[i][j];
	// comprobar
	bool up, down;
	up = checkUp(caso);
	down = checkDown(caso);
	if (up || down)
		cout << "SI\n";
	else
		cout << "NO\n";
	return 1;
}

int main() {
	while (resolver());
	return 0;
}

