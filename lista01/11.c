#include <stdio.h>

int d_to_b( int dec )
{
	int mult = 1;
	int result = 0;
	while ( dec != 0) {
		result = result + (dec % 2) * mult;
		mult = mult * 10;
		dec = dec / 2;
	}
	return result;
}

int b_to_d( int bin )
{
	int result = 0;
	int iii = 0;
	while ( bin != 0 ) {
		result = result + pot(2, bin%10*iii);
		bin = bin / 10;
		iii++;
	}
	return result;	
}

int pot(int x, int y)
{
	int result = 1;
	int resultado = 0;
	int iii = y;
	while ( iii ) {
		result = x*result;
		iii--;
		resultado = result;
	}
	
	return resultado;
}







int main( )
{
	int valor, opcao;
	
	scanf("%d %d", &valor, &opcao);
	if ( opcao == 1 ) {
		printf(("%d\n"), d_to_b( valor ) );
	} else if ( opcao == 2 ) {
		printf(("%d\n"), b_to_d( valor ) );
	}
	return 0;
	

}
