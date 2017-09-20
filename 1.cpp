#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void preencheInt(int tam){
	int v[tam];
	for (int i = 0; i < tam; i++){
		v[i] = rand()%21+10;
		printf("\n%d\n",v[i]);
		}
	}

int main (){
	srand(time(NULL));
	int tam;
	printf("Insere ae: ");
	fflush(stdin);
	scanf("%d",&tam);
	preencheInt(tam);
}
