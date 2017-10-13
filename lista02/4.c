#include <stdio.h>
#include <math.h>


float soma(float x, float y)
{
	return x+y;
}

float sub(float x, float y)
{
	return x-y;
}

float mult(float x, float y)
{
	return x*y;
}

float div(float x, float y)
{
	return x/y;
}

float pot(float x, float y)
{
	return pow(x,y);
}

int main()
{
	int op;
	float x, y, resp;
	scanf("%d %f %f", &op, &x, &y);
	switch (op) {
		case 1:
			resp = soma(x, y);
			break;
		case 2:
			resp = sub(x, y);
			break;
		case 3:
			resp = mult(x, y);
			break;
		case 4:
			resp = div(x, y);
			break;
		case 5:
			resp = pot(x, y);
			break;
	}
	printf("%f\n", resp);
	return 0;
}
