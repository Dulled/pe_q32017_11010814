#include <stdio.h>

int verif(int n)
{
	if ( !(n % 2) ) return 0;
	return 1;
}

int main ()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", verif(n));
	return 0;
}
