#include <stdio.h>

int fatorial(int n, int base)
{
	if ( n <= 1 ) return base;
	return fatorial(n-1,base*n);
}

int cbinomial(int x, int y)
{
	return fatorial(x, 1)/(fatorial(y, 1)*fatorial(x-y, 1));
}

int main()
{
	int x ,y;
	scanf("%d %d", &x, &y);
	printf("%d\n", cbinomial(x, y));
	return 0;
}
