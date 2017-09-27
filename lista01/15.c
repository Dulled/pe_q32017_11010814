#include <stdio.h>

void imprimir ( int limite )
{
	int teste = 100;
	while ( teste <= limite ) {
		if ( teste == limite && teste % 2 == 0 ) {
			printf("%d\n", teste);
		} else if ( teste % 2 == 0 ) {
			printf("%d, ", teste);
		}
		teste += 2;
	}
	return;
}


int main( )
{
	int limite;
	scanf("%d", &limite);
	imprimir( limite );
}

