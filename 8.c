#include <stdio.h>

int Transposta(int linhas, int colunas, int matriz[linhas][colunas]){
    printf("\nTRANSPOSTA\n");

    int transposta[colunas][linhas];

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){;
            transposta[i][j] = matriz[j][i];
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main(){
    int matriz[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    Transposta(3,2,matriz);
    return 0;
}