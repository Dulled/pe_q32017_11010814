#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y) 
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void trans(int matrix[][3])
{
	for ( int i = 0; i<3; i++ ) {
		for( int j = 1+i; j<3; j++ ) {
			if (i==j) {} else {
				troca(&matrix[i][j], &matrix[j][i]);
			}
		}
	} 
}

int main ()
{
	int matrix[3][3];
	for ( int i = 0; i < 3; i++ ) {
		for ( int j= 0; j < 3; j++ ) {
			scanf("%d", &	matrix[i][j]);
		}
	}
	trans(matrix);
	
	for ( int i = 0; i < 3; i++ ) {
		for ( int j= 0; j < 3; j++ ) {
			printf("%d ", matrix[i][j]);
			if ( j == 2 ) printf("\n");
		}
	}
	return 0;
}
