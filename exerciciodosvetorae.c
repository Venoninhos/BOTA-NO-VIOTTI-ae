#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void preenche_vetor (int v[], int tam){
	for (int i = 0; i < tam; i++){
		v[i] = rand()%29+1;
	}
}

void mostra_vetor (int *v, int tam){
	for (int i = 0; i < tam; i++){
	printf("Vetor nº %d: %d\n",i,v[i]);
	}
}

void procura_vetor (int v[], int tam, int num){
	int check = 0;
	if (num == 0){
		exit(0);
	}
	for (int i = 0; i < 10; i++){
		if (num == v[i]){
			check++;
			printf("O número está na posição %d\n",i+1);
		}
	}
	if (check == 0){
		printf("Número não encontrado.\n");
	}
}

int main (){
	srand(time(NULL));
	int v[10];
	int num;
	setlocale(LC_ALL,"Portuguese");
	preenche_vetor(v,10);
	mostra_vetor(v,10);
	do{
	printf("Insira o número que você quer achar: ");
	fflush(stdin);
	scanf("%d",&num);
	procura_vetor(v,10,num);
	}while (num != 0);
}
