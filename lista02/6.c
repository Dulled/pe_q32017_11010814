#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c)
{
	return (b*b - (4*a*c));
}

double calc_raiz1(double a, double b, double c)
{
	return 	(-b+sqrt(delta(a, b, c)))/(2*a);
}

double calc_raiz2(double a, double b, double c)
{
	return 	(-b-sqrt(delta(a, b, c)))/(2*a);
}


int main()
{

	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%lf ", calc_raiz2(a, b, c));
	printf("%lf\n", calc_raiz1(a, b, c));
	return 0;
	
}

