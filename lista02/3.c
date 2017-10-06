#include <stdio.h>
#include <math.h>

float pi(float a, float b, float t, float p, float itera)
{
	if (itera == 0) return a;
	float a1 = (a+b)/itera;
	b = sqrt(a*b);
	t = t - p*(pow(a-a1, 2));
	p = 2*p;
	a = a1;
	printf("%f\n", a);
	return pi(a, b, t, p, itera-1);
}

int main ()
{
	printf("%f\n", pi(1, 1/sqrt(2), 1/4, 1, 10));
	return 0;
}
