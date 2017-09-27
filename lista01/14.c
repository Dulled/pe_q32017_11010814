#include <stdio.h>

void soma_media( )
{
	float soma = 0;
	float entrada = 0;
	for (int i = 0;i < 10;i++) {
		scanf("%f", &entrada);
		soma += entrada;
	}
	printf("%f\n", soma);
	printf("%f\n", soma/10);
	return;
	
}


int main( )
{
	soma_media( );
	return 0;
}
