#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
float soma(int tam){
	float calc = 0;
	float vet[tam];
	for (int i = 0; i < tam; i++){
		printf("%d: ",i);
		fflush(stdin);
		scanf("%f",&vet[i]);
		calc = calc + vet[i];
	}
	float media = calc / tam;
	printf("Media é %.2f\n",media);
}

int main (){
	setlocale(LC_ALL,"portuguese");
	srand(time(NULL));
	int tam;
	printf("Poe o tamanho do vetor: ");
	fflush(stdin);
	scanf("%d",&tam);
	soma(tam);
}
