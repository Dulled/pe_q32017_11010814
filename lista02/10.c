#include <stdio.h>

int fibMem[1000];

int fib (int n)
{
	if (n==0) return 0;
	if (n<=2) return 1;
	fibMem[n] = fib(n-1) + fib(n-2);
	return 	fibMem[n];
}

int show(int cont, int n)
{
	if (cont > n) return 0;
	if (cont == n) {
		printf("%d\n", fibMem[cont]); 
	} else { 
		printf("%d ", fibMem[cont]);
	}
	
	return	show(cont+1, n);
}

int main ()
{
	int n;
	int cont = 1;
	
	fibMem[1] = 1;
	fibMem[2] = 1;
	
	scanf("%d", &n);
	fib(n);
	show(cont, n);
	return 0;
}
