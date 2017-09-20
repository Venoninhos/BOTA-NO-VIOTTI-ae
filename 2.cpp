#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void preenchefloat(int tam){
	float v[tam];
	for (int i = 0; i < tam; i++){
		v[i] = rand()%1001;
		v[i] = v[i] / 100;
		printf("\n%.2f\n",v[i]);
		}
}

int main (){
	srand(time(NULL));
	int tam;
	printf("Insere ae otario: ");
	fflush(stdin);
	scanf("%d",&tam);
	preenchefloat(tam);
}
