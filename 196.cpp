// autor: zubest
#include <iostream>
using namespace std;

const int DIM = 9;
// matriz -> sudoku
typedef char tSudoku[DIM][DIM];
typedef bool tComprobante[DIM][DIM];

void solve() {
	tSudoku s1, s2;
	tComprobante c;
	int num = 0;
	for (int i = 0; i < DIM; ++i)
		for (int j = 0; j < DIM; ++j) {
			cin >> s1[i][j];
			// contamos el número de celdas rellenas
			if (s1[i][j] != '-')
				++num;
			s2[DIM - 1 - i][DIM - 1 - j] = s1[i][j];
		}
	int i = 0, j = 0;
	bool sim = true;
	if (num > 32)
		sim = false;
	while (i < DIM && sim) {
		j = 0;
		while (j < DIM && sim) {
			if (s1[i][j] == '-' && s2[i][j] != '-')
				sim = false;
			++j;
		}
		++i;
	}
	if (sim)
		cout << "SI\n";
	else
		cout << "NO\n";
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		solve();
	return 0;
}
