#include <stdio.h>

int main() 
{
	int x;
	int y;
	
	scanf("%d %d", &x, &y);
	int result = x;	
	for ( int i = 1;i < y;i++ ) {
		result = result*x;
	}
	printf("%d\n", result);
	
	return 0;
} 

