#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int trocacaracteres (char *s, char p, char q){
	printf("Digite uma letra: ");
	fflush(stdin);
	scanf(" %c",&p);
	printf("Digite a letra que você quer alterar: ");
	fflush(stdin);
	scanf(" %c",&q);
	for (int i = 0; i <= strlen(s); i++){
		if (s[i] == p){
			s[i] = q;
		}
	}
	printf("\n\n%s\n\n",s);
}

void separahifen (char *s){
	int i;
	for (i = 0; s[i] != '\0'; i++){ // ou for (i = 0; i < strlen(s); i++){
		if (s[i+1] == '\0'){
			printf("%c",s[i]);
		}
		else {
			printf("%c-",s[i]);
		}
	}
	printf("\n");
}

void ehpalindromo (char *s){
	char aux[strlen(s)];
	int tamanho = strlen(s);
	int i,j = 0;
	for (i = tamanho - 1; i >= 0; i--){
		aux[j] = s[i];
		j++;
	}
	aux[j] = '\0';
	//compara se s e aux são iguais
	if (strcmp(aux,s) == 0){
		printf("A palavra %s é palindroma\n",s);
	}
	else{
		printf("A palavra %s NÃO é palindroma\n",s);
	}
}



int main (){
	setlocale (LC_ALL,"portuguese");
	char palavra[31];
	char q;
	char p;
	do {
		printf("Digita: ");
		fflush(stdin);
		scanf(" %s",palavra);//scanf(" %s",&palavra[0]);
		if (strcmp(palavra,"fim") != 0){
			//trocacaracteres (palavra,p,q);
			separahifen(palavra);
			ehpalindromo(palavra);
			printf("Palavra: %s\n",palavra);
		}
	} while (strcmp (palavra,"fim") != 0);
}


