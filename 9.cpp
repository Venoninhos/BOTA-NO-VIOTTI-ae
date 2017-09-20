#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
float totPares(int tam){
	int calc = 0;
	int v[tam];
	int i;
	for (i = 0; i < tam; i++){
		printf("%d: ",i);
		fflush(stdin);
		scanf("%d",&v[i]);
	}
	for (i = 0; i < tam; i++){
		if (v[i] % 2 == 0){
			calc++;
		}
	}
	printf("Pares sao %.2d\n",calc);
}

int main (){
	setlocale(LC_ALL,"portuguese");
	srand(time(NULL));
	int tam;
	printf("Poe o tamanho do vetor: ");
	fflush(stdin);
	scanf("%d",&tam);
	totPares(tam);
}
