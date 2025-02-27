#include "util.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int l, c;

  scanf("%d %d", &l, &c);

  int **mat = (int **)malloc(l * sizeof(int *));

  for (int i = 0; i < l; i++) {
    mat[i] = (int *)malloc(c * sizeof(int));

    for (int j = 0; j < c; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  int value;

  printf("Valor para pesquisa: ");
  scanf("%d", &value);

  if (is_value_in_matrix(mat, l, c, value)) {
    printf("Valor encontrado\n");
  } else {
    printf("Valor não encontrado\n");
  }

  for (int i = 0; i < l; i++) {
    free(mat[i]);
    mat[i] = NULL;
  }
  free(mat);
  mat = NULL;

  return 0;
}