#include <stdio.h>
#include <string.h>

int main() {
	int flag, i;
	char str[51];

	while (gets(str) != NULL) {
	
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