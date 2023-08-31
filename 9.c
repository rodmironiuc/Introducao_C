#include <stdio.h>
#include <stdlib.h>

int main() {
  int matrix[3][3] = {
    {1, -2, 3},
    {6, -4, -12},
    {-3, 9, 11}
  };

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (matrix[i][j] < 0) {
        matrix[i][j] = matrix[i][j] * -1;
      }
    }
  }

  printf("Matriz após substituição:\n");
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        printf("%d ", matrix[i][j]);
      }
      printf("\n");
    }

  return 0;
}