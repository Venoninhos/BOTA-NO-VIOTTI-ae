#include "stdlib.h"
#include "stdio.h"
#include "locale.h"
int menores(int *v, int tam, int valor){
int i;
for(i = 0; i < tam; i++){
	if (v[i] < valor){
	printf("%d � menor\n", v[i]);
	}
	else if(v[i] == valor){
		printf("%d � igual\n", v[i]);
	}
	else {
		printf("%d � maior\n", v[i]);
	}
}
	
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
		printf("Digite o %d� numero:", i+1);
		scanf("%d", &v[i]);
	}
	menores(v, tam, valor);
}

