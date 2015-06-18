#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool divisibleBy11(char *number, int size) {
	int i, aux, sig;
	for (i = 0, aux = 0, sig = 1; i < size; ++i) {
		//aux = sig * atoi(number[0]);
		// printf("number[%d]= %d (%d)\n", i, number[i], (number[i] - '0'));
		aux = aux + sig * (number[i] - '0');
		sig = sig * (-1);

	}
	//printf("%d\n", aux);
	
	if (aux % 11 == 0)
		return true;
	else
		return false;
}

bool divisibleBy55(char *number, int size) {
	if (divisibleBy11(number, size) && size > 1 && (number[size-1] == '0' || number[size-1] == '5'))
		return true;
	else
		return false;
}

bool divisibleBy5(char *number, int size) {
	if (number[size-1] == '5' || number[size-1] == '0')
		return true;
	else
		return false;
}

bool divisibleBy4(char *number, int size) {
	int aux;
	if (size > 1)
		aux = number[size-2] * 10 + number[size-1];
	else
		aux = number[size-1];

	if (aux % 4 == 0)
		return true;
	else
		return false;
}

bool divisibleBy3(char *number, int size) {
	int i, aux;
	for (i = 0, aux = 0; i < size; ++i) {
		//aux = sig * atoi(number[0]);
		// printf("number[%d]= %d (%d)\n", i, number[i], (number[i] - '0'));
		aux = aux + (number[i] - '0');
	}
	//printf("%d\n", aux);
	
	if (aux % 3 == 0)
		return true;
	else
		return false;

}

bool divisibleBy100(char *number, int size) {
	if (size > 2 && number[size-2] == '0' && number[size-1] == '0')
		return true;
	else
		return false;
}

bool divisibleBy400(char *number, int size) {
	int aux;
	
	if (size > 4)
		aux = number[size-5] * 10000 + number[size-4] * 1000 + number[size-3] * 100 + number[size-2] * 10 + number[size-1];
	else
		aux = atoi(number);

	if (aux % 400 == 0)
		return true;
	else
		return false;
}

void gulamatu(char *year, int size) {
	bool isLeap, isHuluculu, isBulukulu;

	//leap year
	if ( divisibleBy4(year, size) ) {
		//printf("é ano divisível por 4\n");
		if ( divisibleBy100(year,size) ) {
			if ( divisibleBy400(year,size) ) {
				// printf("é divisível por 400 - É BISSEXTO!\n");
				isLeap = true;
			} else {
				// printf("é divisível por 100 - NÃO É bissexto\n");
				isLeap = false;
			}
		} else {
			//printf("É BISSEXTO!\n");
			isLeap = true;
		}
	} else {
		//printf("não é bissexto\n");
		isLeap = false;
	}

	//huluculu
	if ( divisibleBy5(year,size) && divisibleBy3(year,size)) {
		//printf("huluculu!\n");
		isHuluculu = true;
	} else {
		isHuluculu = false;
	}

	//bulukulu
	if ( divisibleBy55(year,size) && isLeap) {
		//printf("bulukulu!\n");
		isBulukulu = true;
	} else {
		isBulukulu = false;
	}

	if (isLeap) {
		printf("This is leap year.\n");
	}
	if (isHuluculu) {
		printf("This is huluculu festival year.\n");
	}
	if (isBulukulu) {
		printf("This is bulukulu festival year.\n");
	}
	if (!isLeap && !isHuluculu && !isBulukulu) {
		printf("This is an ordinary year.\n");
	}

	printf("\n");

}


int main() {
	// unsigned long long year;

	// while ( scanf("%llu", &year)!= EOF ) {
	// 	gulamatu(year);
	// }

	char year[1001];
	int size;
	while ( scanf("%s", year) != EOF) {
		size = strlen(year);
		gulamatu(year, size);
		// printf("Divisível por 400: %d\n", divisibleBy400(number, size));
		// printf("Divisível por 100: %d\n", divisibleBy100(number, size));
		// printf("Divisível por 55: %d\n", divisibleBy55(number, size));
		// printf("Divisível por 11: %d\n", divisibleBy11(number, size));
		// printf("Divisível por 5: %d\n", divisibleBy5(number, size));
		// printf("Divisível por 4: %d\n", divisibleBy4(number, size));
		// printf("Divisível por 3: %d\n", divisibleBy3(number, size));

	}

	return 0;
}