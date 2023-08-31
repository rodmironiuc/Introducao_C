#include <stdio.h>
#include <stdlib.h>

int** soma(int **matriz, int n, int m);

int** multiplica(int **matriz, int n, int m);

int main()
{
    int linhas = 2, colunas = 2;
    int **matriz = (int **)malloc(linhas * sizeof(int *));

    for (int i=0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        matriz[0][0] = 1;
        matriz[0][1] = 2;
        matriz[1][0] = 3;
        matriz[1][1] = 4;
    }

    printf("Matriz original: \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int **matriz_resultante_1 = soma(matriz, linhas, colunas);

    printf("\nMatriz com linha 2 somada com linha 1:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz_resultante_1[i][j]);
        }
        printf("\n");
    }

    int **matriz_resultante_2 = multiplica(matriz, linhas, colunas);

    printf("\nMatriz com linha 2 multiplicada por linha 1:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz_resultante_2[i][j]);
        }
        printf("\n");
    }

    free(matriz);
    return 0;
}



int** soma(int **matriz, int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        matriz[1][i] += matriz[0][i];
    }
    return matriz;
}




int** multiplica(int **matriz, int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        matriz[1][i] *= matriz[0][i];
    }
    return matriz;
}