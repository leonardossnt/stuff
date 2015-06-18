#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int n, i, first, last;
	int *q;

	cin >> n;

	while (n != 0) { 
		//creates queue
		q = (int*) malloc((2*(n-1) + 1) * sizeof(int));

		for (i = 0; i < n; i++) {
			q[i] = i+1;
		}

		first = 0;
		last = n-1;

		//discard first
		cout << "Discarded cards: " << q[first];
		first++;

		//put next to the end, and discard another
		while (first < last) {
			q[last+1] = q[first];
			last++;
			first++;

			cout << ", " << q[first];
			first++;
		}

		cout << endl;

		//remaining card
		cout << "Remaining card: " << q[last] << endl;

		//dequeue all elements
		free(q);

		cin >> n;
	}

    return 0;
}