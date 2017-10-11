#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

void inverte (char *s){
	char invertido[21];
	int i = 0;
	for (i = strlen(s) - 1; i >= 0; i--){
		printf("%c",s[i]);
	}
	printf("\n");
}

int contavogais(char *s){
	int n = 0;
	for (int i = 0; i < strlen(s); i++){
		if (s[i] == 'a'){
			n++;
		}
	}
	return n;
}

void desenha(char *s){
	for (int i = 0; i <= strlen(s); i++){
		for (int k = 0; k < i; k++){
			printf("%c",s[k]);
		}
	printf("\n");
	}	
}
int main (){
	setlocale(LC_ALL,"portuguese");
	char vetor[21] = "Antonioviado";
	while (strcmp(vetor,"fim") != 0){
		printf("Insira uma palavra simples: ");
		fflush(stdin);
		scanf(" %20[^\n]",vetor);
		if (strcmp(vetor,"fim") != 0){
			printf("Essa palavra tem %d NUMEROS \n",strlen(vetor));
		}
		inverte(vetor);
		desenha(vetor);
		printf("Sua palavra tem %d letras a.\n",contavogais(vetor));
	}
}
