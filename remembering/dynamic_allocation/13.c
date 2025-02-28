#include "util.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int N;

  scanf("%d", &N);

  int **mat = get_matrix_diagonal_1(N, N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) {
        mat[i][j] = 0;
      } else if (j > i) {
        mat[i][j] = 1;
      } else {
        mat[i][j] = -1;
      }
    }
  }

  print_mat(mat, N, N);

  for (int i = 0; i < N; i++) {
    free_arr(mat[i]);
  }
  free(mat);
  mat = NULL;

  return 0;
}