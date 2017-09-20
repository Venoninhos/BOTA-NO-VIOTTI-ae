#include "stdlib.h"
#include "stdio.h"
#include "locale.h"
void iguaismenor(int *v, int tam, int valor){
	int i;
	int calc = 0;
	for(i = 0; i < tam; i++){
		if(v[i] == valor){
			calc++;
		}	
	}
	printf("Você tem %d numeros iguais a %d\n",calc,valor);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int tam, valor;
	printf("Digite o valor:");
	scanf("%d", &valor);
	printf("Digite o tamanho:");
	scanf("%d", &tam);
	int v[tam];
	int i;
	for(i = 0; i < tam; i++){
		printf("Digite o %dº numero:", i+1);
		scanf("%d", &v[i]);
	}
	iguaismenor(v, tam, valor);
}

