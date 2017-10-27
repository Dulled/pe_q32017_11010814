#include <stdio.h>
#include <stdlib.h>

int size(char * entrada)
{
	int n = 0;
	while ( entrada[n] != '\0' ) n++;
	return n;
	
}

char* inverter(char *entrada, char *saida, int n)
{
	for ( int i = 0; i<n; i++ ) {
		saida[i] = entrada[(n-1)-i];
	}
	saida[n] = '\0';
	return saida;
}

int main ()
{
	char entrada[255];
	fgets(entrada, 255, stdin);
	char saida[255] = {0};
	int tamanho = size(entrada);
	printf("%s\n", inverter(entrada,saida, tamanho));
	return 0;
}
