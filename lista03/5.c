#include <stdio.h>
#include <stdlib.h>


void verificador(int *v1, int n)
{
	for ( int i = 0; i<10; i++ ) {
		int contador = 0;
		for ( int j = 0; j<n; j++ ) {
			if (v1[j] == i) contador++;
		}
		if (contador >= 2) printf("%d-%d ", i, contador); 
	}
	printf("\n");
}

int main()
{
	int n;
	int *v1;
	scanf("%d", &n);
	v1 = malloc(sizeof(int) * n);	
	for ( int i = 0; i < n; i++ ) {
		scanf("%d", &v1[i]);
	}
	
	verificador(v1, n);
	return 0;
}
