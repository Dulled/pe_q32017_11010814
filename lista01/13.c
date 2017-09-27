#include <stdio.h>

int gauss( int limite )
{
	int soma = 0;
	while ( limite ) {
		soma = soma + limite;
		limite--;
	}
	
	return soma;
}

int main( )
{
	int limite;
	scanf("%d", &limite);
	limite = gauss( limite );
	printf("%d\n", limite);
	return 0;
}
