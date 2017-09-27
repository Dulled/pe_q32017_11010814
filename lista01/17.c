#include <stdio.h>




int soma_quadrado( int x, int y )
{
	int somaq = 0;
	while ( x <= y ) {
		somaq = somaq +  (x * x);
		x++;
	}
	
	return somaq;
}

int quadrado_soma( int x, int y )
{
	int qsoma = 0;
	while ( x <= y ) {
		qsoma = qsoma + x;
		x++;
	}
	qsoma = qsoma * qsoma;
	return qsoma;
		
}

void imprimir( int x, int y )
{
	int somaq, qsoma;
	somaq = soma_quadrado( x, y );
	qsoma = quadrado_soma( x, y );
	printf("soma dos quadrados = %d\nquadrado da soma = %d\ndiferenca = %d\n", somaq, qsoma, qsoma-somaq);
	return;
}


int main( )
{
	int x, y;
	scanf("%d %d", &x, &y);
	imprimir( x, y );
	return 0;
	
}


