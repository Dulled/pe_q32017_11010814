#include <stdio.h>

int mdc(int m, int n)
{
	if (n == 0) return m;
	if (m == 0) return n;
	return mdc(n, m%n);

}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n", mdc(m, n));
	return 0;
}

