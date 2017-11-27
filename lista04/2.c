#include <stdio.h>
#include <stdlib.h>

typedef struct tempo {
	int minuto;
	int segundo;
	int decimo;
} tmp;

void calculo(tmp tmp2, tmp tmp1, tmp *tmp3)
{
	int dec1 = tmp1.minuto * 60 * 100;
	dec1 += tmp1.segundo * 100;
	dec1 += tmp1.decimo;
	printf("%d\n", dec1);
	
	int dec2 = tmp2.minuto * 60 * 100;
	dec2 += tmp2.segundo * 100;
	dec2 += tmp2.decimo;
	printf("%d\n", dec2);
	
	int dec3 = dec2 - dec1;
	printf("%d\n", dec3);
	
	tmp3->minuto = dec3/(60*100);
	dec3 -= tmp3->minuto * (60*100);
	tmp3->segundo = dec3/(100);
	dec3 -= tmp3->segundo * (100);
	tmp3->decimo = dec3;
	
}

int main()
{
	tmp tmp1, tmp2, tmp3;
	scanf("%d %d %d", &tmp1.minuto, &tmp1.segundo, &tmp1.decimo);
	scanf("%d %d %d", &tmp2.minuto, &tmp2.segundo, &tmp2.decimo);
	calculo(tmp1, tmp2, &tmp3);
	printf("%dm %ds %d\n", tmp3.minuto, tmp3.segundo, tmp3.decimo);
	
}
