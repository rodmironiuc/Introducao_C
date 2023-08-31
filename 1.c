#include <stdio.h>

int main()
{
    int menor;
    int linha = 0;
    int quantidade;
    printf("Digite a ordem da matriz: ");
    scanf("%d", &quantidade);
    for (int i = 0; i < quantidade * quantidade; i++)
    {
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (i == 0)
        {
            menor = numero;
        }
        else if (menor > numero)
        {
            menor = numero;
            linha = i / quantidade;
        }
    }
    printf("Linha do menor numero: %d", linha + 1);
    return 0;
}