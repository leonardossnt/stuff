#include <stdio.h>
#include <stdlib.h>

int main() {
	int *seq;
	int n, j, i, v, sig, aux;
	long int k;
	char cmd;

	while (scanf("%d %ld", &n, &k) != EOF){
		seq = (int*) malloc(sizeof(int) * n);

		for(j = 0; j < n; j++) {
			scanf("%d", (seq + j));
		}

		while(k > 0) {
			k--;

			getc(stdin);

			cmd = getchar();
			
			if(cmd == 'C') {
				scanf("%d %d", &i, &v);
				*(seq + i - 1) = v;
			} else if (cmd == 'P') {
				scanf("%d %d", &i, &v);

				sig = 1; //means positive

				for(j = i - 1; j < v; j++) {
					if (seq[j] == 0) {
						sig = 0;
						break;
					} else {
						if (seq[j] < 0) {
							sig = (-1) * sig;
						}
					}
				}
				(sig == 0) ? putchar('0') : (sig > 0) ? putchar('+') : putchar('-');
			}
			// } else if (cmd = 'P') {
			// 	scanf("%d %d", &i, &v);

			// 	for(j = i - 1, aux = 1; j < v; j++) {
			// 		aux = aux * seq[j];
			// 	}

			// 	if (aux == 0) putchar('0');
			// 	else if (aux > 0) putchar('+');
			// 	else putchar('-');
			// }
		}

		putchar('\n');
		free(seq);
	}

	return 0;
}