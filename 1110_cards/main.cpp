#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

int main() {
	int n, i;

	queue<int> q;

	cin >> n;

	while (n != 0) { 
		//creates queue
		for (i = 0; i < n; i++) {
			q.push(i+1);
		}

		//discard first
		cout << "Discarded cards: " << q.front();
		q.pop();

		//put next to the end, and discard another
		while (q.size() > 1) {
			q.push( q.front() );
			q.pop();

			cout << ", " << q.front();
			q.pop();
		}

		cout << endl;

		//remaining card
		cout << "Remaining card: " << q.front() << endl;

		//dequeue all elements
		while(q.size() > 0) {
			q.pop();
		}

		cin >> n;
	}

    return 0;
}

