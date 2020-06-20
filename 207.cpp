// autor: zubest
#include <iostream>
#include <utility>
using namespace std;

const int NUM_DIR = 8, mxN = 50;
const pair<int, int> dir8[NUM_DIR] = { {-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1} };
typedef char tCamping[mxN][mxN];
typedef struct {
	int f, c, a;
	tCamping camping;
}tMapa;

void ini(tCamping& c, int row, int col) {
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			c[i][j] = 'n';
}

int count(const tMapa& m) {
	int n = 0;
	for (int i = 0; i < m.f; ++i)
		for (int j = 0; j < m.c; ++j)
			if (m.camping[i][j] == 's')
				++n;
	return n;
}

bool dentroPlano(const tMapa &m, int x, int y) {
	return x >= 0 && x < m.f&& y >= 0 && y < m.c;
}

bool solve(){
	tMapa m;
	int x = 0, y = 0;
	cin >> m.c >> m.f >> m.a;
	if (m.c == 0 || m.f == 0)
		return 0;
	if (m.a == 0)
		cout << "0\n";
	else {
		ini(m.camping, m.f, m.c);
		for (int i = 0; i < m.a; ++i) {
			cin >> y >> x;
			m.camping[x - 1][y - 1] = 'a';
		}
		for (int i = 0; i < m.f; ++i)
			for (int j = 0; j < m.c; ++j)
				if (m.camping[i][j] == 'a') {
					for (int k = 0; k < NUM_DIR; ++k) {
						if (dentroPlano(m, i + dir8[k].first, j + dir8[k].second) 
							&& m.camping[i + dir8[k].first][j + dir8[k].second] != 'a')
							m.camping[i + dir8[k].first][j + dir8[k].second] = 's';
					}
				}
		cout << count(m) << "\n";
	}
	return 1;
}

int main() {
	while (solve());
	return 0;
}
