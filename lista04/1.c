#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct pontos {
	float x;
	float y;
	float z;
} pontos;
	
float calcpnt(pontos pnt1, pontos pnt2)
{
	float x = pow(pnt2.x - pnt1.x, 2);
	float y = pow(pnt2.y - pnt1.y, 2);
	float z = pow(pnt2.z - pnt1.z, 2);
	return sqrt(x + y + z);
}

int main()
{	
	pontos pnt1, pnt2;
	scanf("%f, %f, %f", &(pnt1.x), &(pnt1.y), &(pnt1.z));
	scanf("%f, %f, %f", &(pnt2.x), &(pnt2.y), &(pnt2.z));
	printf("%.2f\n", trunc(100.0 * calcpnt(pnt1, pnt2))/100.0);
	
	return 0;	
}
