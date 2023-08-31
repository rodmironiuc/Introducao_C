#include <stdio.h>

int encontrarCaractere(const char *string, char caracter) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caracter) {
            return i;
        }
    }
    return -1;
}

int main() {
    char string[10] = "fogo"; // Inicializando a string
    char caracter = 'f';

    int posicao = encontrarCaractere(string, caracter);
    if (posicao != -1) {
        printf("Caractere encontrado na posição: %d\n", posicao);
    } else {
        printf("Caractere não encontrado na string.\n");
    }
    return 0;
}