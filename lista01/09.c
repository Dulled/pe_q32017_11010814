#include <stdio.h>

double c_to_f( double temperatura )
{
	return (temperatura * 1.8) + 32;
}


double f_to_c( double temperatura )
{
	return (temperatura - 32) / 1.8;
}


int main( )
{ 
	double temperatura;
	int opcao;
	scanf("%lf %d", &temperatura, &opcao);
	if ( opcao == 1 ) {
		printf("%lf\n", c_to_f(temperatura));
	} else if ( opcao == 2 ) {
		printf("%lf\n", f_to_c(temperatura));
	} else {
		printf("wrong option");
	}
	return 0;
}
