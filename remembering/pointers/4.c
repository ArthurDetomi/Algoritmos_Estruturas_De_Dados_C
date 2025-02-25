#include <stdio.h>

int main() {
  int mat[3][3];

  printf("\tForma 1:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Endereço pos [%d][%d] = %p\n", i, j, ((int *)mat + i * 3 + j));
    }
  }

  printf("\tForma 2:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Endereço pos [%d][%d] = %p\n", i, j, &mat[i][j]);
    }
  }

  int *p = &mat[0][0];

  printf("\tForma 3:\n");
  for (int i = 0; i < 9; i++) {
    printf("%p\n", p + i);
  }

  return 0;
}