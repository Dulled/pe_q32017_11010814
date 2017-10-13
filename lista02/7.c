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


void base(int entrada, int saida, int valor)
{
	if (entrada == saida) {
		printf("%d\n", valor);
	} else if (entrada == 1) {
		d_to_b(valor);
	} else {
		b_to_d(valor);
	}	
	
}



// Temperatura.

void tempk(int saida, float valor)
{
	if (saida == 1) {
		printf("%.2f C\n", valor - 273.15);
	} else if (saida == 2) {
		printf("%.2f F\n", valor*1.8 - 459.67);
	} else {
		printf("%.2f K\n", valor);
	}
	
}

void tempf(int saida, float valor)
{
	if (saida == 1) {
		printf("%.2f C\n", (valor-32) / 1.8);
	} else if (saida == 2) {
		printf("%.2f F\n", valor);
	} else {
		printf("%.2f K\n", (valor + 459.67) * 5.0/9.0);
	}
	
}


void tempc(int saida, float valor)
{
	if (saida == 1) {
		printf("%.2f C\n", valor);
	} else if (saida == 2) {
		printf("%.2f F\n", (valor*1.8) + 32);
	} else {
		printf("%.2f K\n", valor + 273.15);
	}
	
}


void temperatura(int entrada, int saida, float valor)
{
	if (entrada == 1) {
		tempc(saida, valor);
	} else if (entrada == 2) {
		tempf(saida, valor);
	} else {
		tempk(saida, valor);
	}
	
}



int main ()
{
	int opcao, entrada, saida; 
	float valor;
	scanf("%d %d %d %f", &opcao, &entrada, &saida, &valor);
	if (opcao == 1) {
		temperatura(entrada, saida, valor);
	} else if (opcao == 2) {
		base(entrada, saida, valor);
	}
	return 0;
	
}

