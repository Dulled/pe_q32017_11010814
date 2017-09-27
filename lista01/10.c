#include <stdio.h>

double c_to_k( double temperatura )
{
	return temperatura + 273.15;
}


double k_to_c( double temperatura )
{
	return temperatura - 273.15;
}


int main( )
{ 
	double temperatura;
	int opcao;
	scanf("%lf %d", &temperatura, &opcao);
	if ( opcao == 1 ) {
		printf("%lf\n", c_to_k(temperatura));
	} else if ( opcao == 2 ) {
		printf("%lf\n", k_to_c(temperatura));
	} else {
		printf("wrong option");
	}
	return 0;
}
