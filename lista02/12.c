#include <stdio.h>



int fatorial(int n)
{
	if (n == 1) return 1;
	return n*fatorial(n-1);
}

int calculo_binomial(int n, int k)
{
	int valor = fatorial(n);
	valor /= fatorial(k);
	valor /= fatorial(n-k);
	return valor;
}

int main ()
{
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", calculo_binomial(n, k)); 
	return 0;
}
