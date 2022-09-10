#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int T, D, M, m, bandera = false;
	cin >> T >> D >> M;
	if (M > 0) {
		vector <int> bloque(M);
		for (int i = 0; i < M; i++) {
			cin >> m;
			bloque[i] = m;
		}
		int valor = M - 1;
		for (int i = 0; i < valor; ++i) {
			int resultado = bloque[i + 1] - bloque[i];
			if (resultado >= T) {
				bandera = true;
			}
		}
		int final = bloque[M - 1];
		if ((bloque[0] >= T) || (D - final >= T) || (bandera == true)) {
			cout << "Y";
		}
		else {
			cout << "N";
		}
	}
	else if (D >= T){
		cout << "Y";
	}
	else {
		cout << "N";
	}
	return 0;
}