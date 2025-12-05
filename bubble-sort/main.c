#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {1,2,3,4,5};

    void BubbleSort(int* v, int n){
        int i, fim, aux;
        for(fim = n-1; fim > 0; fim--){
            for(i = 0; i < fim; i++){
                if(v[i] > v[i+1]){
                    aux = v[i];
                    v[i] = v[i+1];
                    v[i+1] = aux;
                }
            }
        }
    }

    return 0;
}
