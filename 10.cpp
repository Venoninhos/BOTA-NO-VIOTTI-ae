#include "stdlib.h"
#include "stdio.h"
#include "locale.h"
#include <time.h>
void preencheSemRepetir( int *v, int tam){
	int j, n, achou, k = 0;
	while (k < tam){
		n = rand()%tam+1;
		achou = 0;
		for (j = 0; j < tam; j++){
			if (v[j] == n){
				achou = 1;
				break;
			}
		}
		if (achou == 0){
			v[k] = n;
			k++;
		}
	}
	for (int z=0;z<tam;z++){
		printf("\nv[%d] = %d\n",z,v[z]);
	}
}

int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	int tam;
	tam = rand()%16+5;
	int v[tam];
	preencheSemRepetir(v,tam);
}

