#include <stdio.h>

int inversor(int palin)
{
	int tmp = 0;
	while ( palin ) {
		tmp = (tmp * 10) + palin % 10;
		palin = palin / 10;
	}
	return tmp;
}

int main()
{
	int palin;
	scanf("%d", &palin);

	if (palin == inversor(palin)) {
		printf("sim\n");
	} else {
		printf("nao\n");
	}
	return 0;
	
}
