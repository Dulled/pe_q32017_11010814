#include <stdio.h>
#include <stdlib.h>

typedef struct alunos {
	char nome[100];
	int ra;
	float p1;
	float p2;
	float p3;
	float media;
} alunos;

int main(int argc, char **argv)
{
	alunos alunos[50];
	FILE *fp;
	fp = fopen(argv[1], "r");
	
	
	for (int i = 0; i < 50;i++) {
		fscanf(fp, "\%s \%d \%f \%f %f", &alunos[i].nome, &alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
	}
	
	int fclose( FILE*fp );
	
	for (int i = 0; i < 50; i++ ) {
		alunos[i].media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3);
		alunos[i].media /= 3;
	}
	
	fp = fopen("media_alunos.txt", "w");
	
	for (int i = 0; i < 50; i++) {
		fprintf(fp, "\%s \%d \%.2f \%.2f %.2f %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
	}
	
	int fclose( FILE*fp );
	
}
