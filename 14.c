#include <stdio.h>
#include <string.h>

void inserirChar(char str[100], int pos, char c) {
    int tam = strlen(str);
    for (int i = tam; i > pos; i--) {
        str[i] = str[i - 1];
    }
    str[pos] = c;
}

int main() {
    int pos = 20;
    char c = 'B';
    char Str[100];
    for (int i = 0; i < 100; i++) {
        Str[i] = 'A' + (i % 26);
    }
    printf("String: %s\n", Str);
    inserirChar(Str, pos, c);
    printf("String modificada com caractere na posicao %d: %s\n", pos, Str);
    return 0;
}