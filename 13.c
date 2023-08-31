#include <stdio.h>
#include <string.h>

void removeCharacter(char str[100], int pos);

int main() {
    int position = 20;
    char text[100];
    for (int i = 0; i < 100; i++) {
        text[i] = 'A' + (i % 26);
    }
    printf("Texto original: %s\n", text);
    removeCharacter(text, position);
    printf("Texto após remoção do caractere na posição %d: %s\n", position, text);
    return 0;
}

void removeCharacter(char str[100], int pos) {
    int length = strlen(str);
    if (pos >= 0 && pos < length) {
        for (int i = pos; i < length - 1; i++) {
            str[i] = str[i + 1];
        }
        str[length - 1] = '\0';
    } else {
        printf("Posição não válida.\n");
        }
}