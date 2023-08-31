#include <stdio.h>

int main(){
    int linhas,colunas,numero;
    printf("\nQuantidade de linhas:");
    scanf("%d",&linhas );
    printf("\nQuantidade de colunas:");
    scanf("%d",&colunas);

    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("\nlin %d col %d: ",i+1, j+1);
            scanf("%d", &numero);
            matriz[i][j] = numero;
        }
    }

    int transposta[colunas][linhas];

    printf("\nTRANSPOSTA\n");

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){;
            transposta[i][j] = matriz[j][i];
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}