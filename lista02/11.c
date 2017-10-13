#include <stdio.h>
#include <math.h>

// Base.

void d_to_b(int valor)
{
	int multiplicador = 1;
	int binario = 0;
	while ( valor ) {
		binario += (valor % 2)*multiplicador;
		multiplicador *= 10;
		valor /= 2;
	}
	printf("%d\n", binario);
		
}

void b_to_d(int valor)
{
	int decimal = 0;
	int multiplicador = 0;
	while( valor ) {
		decimal += (valor % 10) * pow(multiplicador, 2);
		valor /= 10;
		multiplicador++;
	}
	printf("%d\n", decimal);
	
}

int main ()
{
	int valor, opcao;
	scanf("%d %d", &valor, &opcao);
	if (opcao == 1) d_to_b(valor);
	if (opcao == 2) b_to_d(valor);
	return 0;
}

