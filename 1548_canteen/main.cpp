#include <iostream>
#include <stdlib.h>

using namespace std;

void selectionSortDesc(int *anArray, int nSize) {
	for (int nStartIndex = 0; nStartIndex < nSize; nStartIndex++)
	{
	    // nSmallestIndex is the index of the smallest element
	    // we've encountered so far.
	    int nSmallestIndex = nStartIndex;
	 
	    // Search through every element starting at nStartIndex+1
	    for (int nCurrentIndex = nStartIndex + 1; nCurrentIndex < nSize; nCurrentIndex++)
	    {
	        // If the current element is smaller than our previously found smallest
	        if (anArray[nCurrentIndex] > anArray[nSmallestIndex])
	            // Store the index in nSmallestIndex
	            nSmallestIndex = nCurrentIndex;
	    }
	 
	    // Swap our start element with our smallest element
	    swap(anArray[nStartIndex], anArray[nSmallestIndex]);
	}
}

void canteen(int *q, int size) {
	int i, r;
	int *aux;

	aux = (int*) malloc(size + 1);
	std::copy(q, q + size, aux);

	selectionSortDesc(aux, size);

	for (i = 0, r = 0; i < size; i++) {
		if (q[i] == aux[i]) r++;
	}

	cout << r << endl;
}

int main() {
	int n, m;
	int i, j;
	int *q;

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

		canteen(q, m);

		free(q);
	}

    return 0;
}

