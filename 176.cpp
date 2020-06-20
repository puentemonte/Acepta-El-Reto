// autor: zubest
#include <iostream>
#include <utility>

using namespace std;

const int mxN = 1e3, NUM_DIR = 8;
// {i, j}
const pair<int, int> dirs8[NUM_DIR] = { {-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1} };

typedef struct {
	int f, c;
	char** arr;
}tTablero;

bool inPlane(const tTablero& t, int x, int y) {
	return (x >= 0 && x < t.f&& y >= 0 && y < t.c);
}

int count(const tTablero& t) {
	int c = 0, n = 0;
	for (int i = 0; i < t.f; ++i)
		for (int j = 0; j < t.c; ++j)
			if (t.arr[i][j] == '-') {
				for (int k = 0; k < NUM_DIR; ++k) {
					if(inPlane(t, i + dirs8[k].first, j + dirs8[k].second))
						if (t.arr[i + dirs8[k].first][j + dirs8[k].second] == '*')
							++c;
				}
				if (c >= 6)
					++n;
				c = 0;
			}
	return n;
}

bool solve() {
	tTablero tab;
	// initialize
	tab.arr = new char*[mxN];
	for (int i = 0; i < mxN; ++i)
		tab.arr[i] = new char[mxN];

	cin >> tab.c >> tab.f;
	if (tab.f == 0 || tab.c == 0)
		return 0;
	for (int i = 0; i < tab.f; ++i)
		for (int j = 0; j < tab.c; ++j)
			cin >> tab.arr[i][j];
	cout << count(tab) << "\n";

	// delete
	for (int i = 0; i < mxN; ++i)
		delete[]tab.arr[i];
	delete[]tab.arr;

	return 1;
}

int main() {
	while (solve());
	return 0;
}
