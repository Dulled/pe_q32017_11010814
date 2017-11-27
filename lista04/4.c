#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
 return (
   x == 1 || x == 2 || x == 4 || x == 8 || x == 16 || x == 32 ||
   x == 64 || x == 128 || x == 256 || x == 512 || x == 1024 ||
   x == 2048 || x == 4096 || x == 8192 || x == 16384 ||
   x == 32768 || x == 65536 || x == 131072 || x == 262144 ||
   x == 524288 || x == 1048576 || x == 2097152 ||
   x == 4194304 || x == 8388608 || x == 16777216 ||
   x == 33554432 || x == 67108864 || x == 134217728 ||
   x == 268435456 || x == 536870912 || x == 1073741824 ||
   x == 2147483648);
}

ulint f2(ulint x)
{
	return (x && !(x & x-1)); // return 0 if power of 2;
}

int main(void)
{
	
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;
	
	tempo_init = clock();
	for (int i=0; i<BIGNUM; i++) {
		soma += f1(i);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
	
	tempo_init = clock();
	for (int i=0; i<BIGNUM; i++) {
		soma += f2(i);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
	
	return 0;
	
}
