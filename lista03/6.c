#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}

float mediana(int *v1, int n) 
{
	if ( !(n%2) ) return ( v1[(n/2)-1] + v1[(n/2)])/2.0;
	return v1[n/2]; 
} 

int main()
{
	int n;
	scanf("%d", &n);
	int *v1;
	v1 = malloc(sizeof(int) * n);
	for ( int i = 0; i<n; i++ ) {
		scanf("%d", &v1[i]);
	}	
	
	qsort(v1, n, sizeof(int), cmpfunc);
	printf("%.2f\n", mediana(v1, n));
	
	
	free(v1);
	return 0;
}
