#include <stdio.h>

float descontos(int id, int faltas)
{
	float desconto = 0;
	switch ( id ) {
		case 1:
			desconto = (10000/20) * faltas;
			break;
		case 2:
			desconto = (8000/20) * faltas;
			break;
		case 3:
			desconto = (5000/20) * faltas;
			break;
		case 4:
			desconto = (3000/20) * faltas;
			break;
		case 5:
			desconto = (2000/20) * faltas;
			break;
		default:
			printf("ID inválido\n");
		}
	return desconto;
}

float acrescimos(int id, int hextra)
{
	float acrescimo = 0;
	switch ( id ) {
		case 1:
			acrescimo = ((10000.0/20.0)/8.0 + 40.0) * hextra;
			break;
		case 2:
			acrescimo = ((8000.0/20.0)/8.0 + 40.0) * hextra;
			break;
		case 3:
			acrescimo = ((5000.0/20.0)/8.0 + 40.0) * hextra;
			break;
		case 4:
			acrescimo = ((3000.0/20.0)/8.0 + 40.0) * hextra;
			break;
		case 5:
			acrescimo = ((2000.0/20.0)/8.0 + 40.0) * hextra;
			break;
		default:
			printf("ID inválido\n");
		}
	return acrescimo;
} 

float salario(int id, int total)
{
	
	switch ( id ) {
		case 1:
			printf("%d\n", 10000 + total);
			break;
		case 2:
			printf("%d\n", 8000 + total);
			break;
		case 3:
			printf("%d\n", 5000 + total);
			break;
		case 4:
			printf("%d\n", 3000 + total);
			break;
		case 5:
			printf("%d\n", 2000 + total);
			break;
		default:
			printf("ID inválido\n");
		}
		
}



int main()
{
	int id, faltas, hextra;
	float desconto, acrescimo;
	scanf("%d %d %d", &id, &faltas, &hextra);
	desconto = descontos(id, faltas);
	acrescimo = acrescimos(id, hextra);
	salario(id, acrescimo - desconto);
	return 0;
}

