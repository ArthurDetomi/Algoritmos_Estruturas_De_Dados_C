#include "util.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, value;

  scanf("%d %d", &N, &value);

  printf("Question 10 test\n");
  int *arr = get_arr_int_fill_value(N, value);

  printf("\nPriting array...\n");
  print_arr(arr, N);

  printf("\nQuestion 11 and 12 test\n");
  int **mat = get_matrix_diagonal_1(N, N);

  for (int i = 0; i < N; i++) {
    print_arr(mat[i], N);
  }

  free_arr(arr);

  for (int i = 0; i < N; i++) {
    free_arr(mat[i]);
  }
  free(mat);
  mat = NULL;

  return 0;
}