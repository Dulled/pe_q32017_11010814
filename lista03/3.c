#include <stdio.h>
#include <stdlib.h>

void soma(int *v1, int *v2, int *v3)
{
	for ( int i = 0; i<5; i++ ) {
		v3[i] = v1[i] + v2[i];
	}
}

int main()
{
	int v1[5];
	int v2[5];
	int v3[5];
	for ( int i = 0; i<5; i++ ) {
		scanf("%d", &v1[i]);
	}
	for ( int i = 0; i<5; i++ ) {
		scanf("%d", &v2[i]);
	}
	soma(v1, v2, v3);
	for ( int i = 0; i<5; i++ ) {
		printf("%d ", v3[i]);
		if (i == 4) printf("\n");	
	}
	
	return 0;
}
