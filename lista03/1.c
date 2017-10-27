#include <stdio.h>
#include <stdlib.h>

int size(char * entrada)
{
	int n = 0;
	while ( entrada[n] != '\0' ) n++;
	return n;
	
}

int contar(char * entrada)
{
	int n = size(entrada);
	int contador = 0;
	for ( int i = 0; i<n; i++) {
		if (entrada[i] == 'a') contador++;
		if (entrada[i] == 'e') contador++;
		if (entrada[i] == 'i') contador++;
		if (entrada[i] == 'o') contador++;
		if (entrada[i] == 'u') contador++;
	}
	
	return contador;
	
}

int main ()
{
	char entrada[255];
	fgets(entrada, 255, stdin);
	printf("%d\n", contar(entrada));
	return 0;
}
