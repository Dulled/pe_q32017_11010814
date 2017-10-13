#include <stdio.h>

int potencia(int x, int y, int base)
{
	if ( y == 0 ) return 1;
	if ( y == 1 ) return x;
	return potencia(x*base,y-1, base);
	 
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", potencia(x, y, x));
	return 0;
}
