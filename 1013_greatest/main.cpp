#include <iostream>
#include <stdlib.h>

using namespace std;

int maiorAB(int a, int b) {
	return ((a + b + abs(a-b))/2);
}

int main() {
	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	int maior = maiorAB(maiorAB(a, b), c);

	cout << maior << " eh o maior" << endl;

    return 0;
}

