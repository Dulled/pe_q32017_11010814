#include <stdio.h>

int main(){
	int x;
	scanf("Entre com um valor inteiro: %d", &x);
	if ( (x%2) == 0) {
		printf("Par\n");
	}	
	else{
		printf("Impar\n");
	}

	return 0;
}

