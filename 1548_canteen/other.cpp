#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
	int n, m, r;
	int i, j;
	int *q, *aux;

	//scanf("%d", &n);
	cin >> n;

	for (i = 0; i < n; i++) {
		//scanf("%d", &m);
		cin >> m;

		q = (int*) malloc(m + 1);

		for (j = 0; j < m; j++) {
			//scanf("%d", &q[j]);
			cin >> q[j];
		}

		aux = (int*) malloc(m + 1);
		std::copy(q, q + m, aux);

		sort(aux, aux+m, std::greater<int>());

		for (j = 0, r = 0; j < m; j++) {
			if (q[j] == aux[j]) r++;
		}

		cout << r << endl;

		free(q);
	}

    return 0;
}