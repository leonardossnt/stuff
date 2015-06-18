#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, n;
	char str[51];

	while (scanf("%d", &n) != NULL) {
	
		for (i = 0, flag = 0; i < strlen(str); i++) {
			if (str[i] != ' ') {
				flag ? putchar(tolower(str[i])) : putchar(toupper(str[i]));
				flag = !flag;
			} else {
				putchar(' ');
			}
		}

		printf("\n");
	}

	return 0;
}