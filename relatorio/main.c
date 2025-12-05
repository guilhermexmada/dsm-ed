#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int quantidade;
    int relatorio[9][9];
    int i, j;

    scanf("%i", &quantidade);

    for(i = 0; i < 9; i++){
        j = 0;
        scanf("%i" " %i" "%i" "%i" "%i" "%i" "%i" "%i", relatorio[i] [j], relatorio[i][j+1], relatorio[i][j+2],
                                            relatorio[i][j+3], relatorio[i][j+4], relatorio[i][j+5],
                                            relatorio[i][j+6], relatorio[i],[j+7], relatorio[i][j+8]);
    }
                                        return 0;
}

