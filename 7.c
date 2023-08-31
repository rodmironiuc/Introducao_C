#include <stdio.h>


struct Pessoa {
  char nome[50];
  int idade;
  float peso;
  float altura;
};

int main() {
  struct Pessoa pessoas[3];

  for (int i = 0; i < 3; i++) {
    printf("Nome da pessoa %d: ", i + 1);
    scanf("%s", pessoas[i].nome);

    printf("A idade da pessoa %d: ", i + 1);
    scanf("%d", &pessoas[i].idade);

    printf("O peso da pessoa %d: ", i + 1);
    scanf("%f", &pessoas[i].peso);

    printf("A altura da pessoa %d: ", i + 1);
    scanf("%f", &pessoas[i].altura);
    }

  printf("\nDados das pessoas:\n");
  for (int i = 0; i < 3; i++) {
    printf("Pessoa %d:\n", i + 1);
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Idade: %d anos\n", pessoas[i].idade);
    printf("Peso: %.2f kg\n", pessoas[i].peso);
    printf("Altura: %.2f m\n", pessoas[i].altura);
    printf("\n");
  }

  return 0;
}