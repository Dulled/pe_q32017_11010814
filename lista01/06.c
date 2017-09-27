#include <stdio.h>

int main() {
	
	int x;
	int result = 1;
	scanf("%d", &x);
	if (x > 1) {
	
		while (x != 1){
			result = result * (x);
			x--;
		}
		
	} else { 
		result = 1;
	}
	
	printf("%d\n",result);
	
	return 0;
	
}	
