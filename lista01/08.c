#include <stdio.h>


/* Exibe a sequência de fibonacci. */

void fibonacci(int ntermo)
{
	int termo_n1 = 1;
	int termo_n2 = 0;
	int termo = 0;
	printf("%d, %d, ", termo_n2, termo_n1);
	for ( int i =3; i < ntermo; i++ ){
		termo = termo_n1 + termo_n2;
		printf("%d, ", termo);
		termo_n2 = termo_n1;
		termo_n1 = termo;
	}
	printf("%d\n", termo_n1 + termo_n2);
	return;
}

int main()
{
	int ntermo;
	scanf("%d", &ntermo);
	fibonacci(ntermo);
	return 0;
}
