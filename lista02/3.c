#include <stdio.h>
#include <math.h>

double pi(double a,double b, double t, double p, double itera)
{
	if (itera == 10) return pow((a+b),2)/(4*t);
	double a1 = (a+b)/2.0;
	b = sqrt(a*b);
	t = t - p*((a-a1)*(a-a1));
	p = 2*p;
	a = a1;
	return pi(a, b, t, p, itera+1);
}

int main ()
{
	double a = 1;
	double b = 1.0/sqrt(2);
	double t = 1.0/4.0;
	double p = 1;
	printf("%.*f\n", 10, pi(a,b,t,p,1));
	return 0;
}
