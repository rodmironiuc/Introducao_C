
int main() {
    int linhas, colunas, numero;
    printf("\nQuantidade de linhas:");
    scanf("%d", &linhas);
    printf("\nQuantidade de colunas:");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("\nlin %d col %d: ", i + 1, j + 1);
            scanf("%d", &numero);
            matriz[i][j] = numero;
        }
    }
    int multiplicador;
    char xy;
    printf("\nQual numero deseja multiplicar?");
    scanf("%d", &multiplicador);

    printf("\nDeseja multiplicar uma linha ou coluna? (digite 'l' para linha ou 'c' para coluna)");
    scanf(" %c", &xy);

    if (xy == 'l') {
        int x;
        printf("\nEscolha a linha que deseja multiplicar:");
        scanf("%d", &x);
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                if (i == (x-1)) {
                    matriz[i][j] = matriz[i][j] * multiplicador;
                }
            }
        }
    } else {
        int y;
        printf("\nEscolha a coluna que deseja multiplicar:");
        scanf("%d", &y);
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                if (j == (y-1)) {
                    matriz[i][j] = matriz[i][j] * multiplicador;
                }
            }
        }
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}