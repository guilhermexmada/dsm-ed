#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int * v, int n){ // n : tamanho do vetor
	int i, fim, aux;
	for(fim = n-1; fim > 0; fim--){ //diminui de tamanho toda vez que uma posição correta é definida, para não fazer repetições desnecessárias
		for(i = 0; i < fim; i++){ //percorre todo o vetor várias vezes até levar o maior valor atual até a posição final
			if(v[i] > v[i+1]){ //se a posição atual for maior que a próxima, troca de lugar com a próxima
				aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
			}
		}
	}
}

int main()
{
    int vetor[] = {9,3,7,1,2,5,0,4,6,8};
    int i;

    BubbleSort(vetor, 9);

    for(i=0;i<9;i++){
        printf("%i",vetor[i]);
    }
    return 0;
}
