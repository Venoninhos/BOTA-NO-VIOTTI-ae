#include <stdio.h>
#include <locale.h>

int maior(int v[], int tam){
//	int v[tam];
	for (int i = 0; i < tam; i++){
		printf("Insira o valor do %dº: ",i);
		fflush(stdin);
		scanf("%d",&v[i]);
	}
	int aux = 0;
	for (int i = 0; i < tam; i++){
		if (v[i] > aux){
			aux = v[i];
		}
	}
	printf("O maior numero é %d\n",aux);
}

int main (){
	int tam;
	setlocale(LC_ALL,"portuguese");
	printf("Insira o tamanho: ");
	fflush(stdin);
	scanf("%d",&tam);
	int vetor[tam];
	maior(vetor, tam);
}
