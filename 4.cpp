#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
float soma(int t){
	float calc = 0;
	float m[t];
	for (int i = 0; i < t; i++){
		printf("%d: ",i);
		fflush(stdin);
		scanf("%f",&m[i]);
		calc = calc + m[i];
	}
	printf("Soma total é %.2f\n",calc);
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
