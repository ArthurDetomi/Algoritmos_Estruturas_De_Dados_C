#include "util.h"
#include <stdio.h>
#include <stdlib.h>

void get_int_demiliter(int *n, int min, int max) {
  while (1) {
    printf("Insira um valor:");
    scanf("%d", n);

    if (*n >= min && *n <= max) {
      break;
    }

    printf("Invalid value.. try again\n");
  }
}

void fill_arr(int *arr, int tam) {
  printf("\nFill array...\n");
  for (int i = 0; i < tam; i++) {
    scanf("%d", &arr[i]);
  }
}

void print_arr(int *arr, int tam) {
  printf("\nPriting array...\n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int *get_arr(int n) {
  // Question 8
  if (n <= 0) {
    return NULL;
  }

  int *arr = (int *)malloc(n * sizeof(int));

  if (arr == NULL) {
    printf("Allocation memory to array error\n");
    exit(1);
  }

  return arr;
}

int is_value_in_matrix(int **mat, int l, int c, int value) {
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      if (value == mat[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}