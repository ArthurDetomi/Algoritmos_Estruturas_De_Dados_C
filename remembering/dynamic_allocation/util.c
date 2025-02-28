#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  for (int i = 0; i < tam; i++) {
    printf("%2d ", arr[i]);
  }
  printf("\n");
}

void print_mat(int **mat, int l, int c) {
  for (int i = 0; i < l; i++) {
    print_arr(mat[i], c);
  }
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

void *get_arr_by_tipo(int n, Tipo t) {
  void *ptr;

  if (n <= 0) {
    return NULL;
  }

  switch (t) {
  case CHAR:
    ptr = malloc(n * sizeof(char));
    break;
  case INT:
    ptr = malloc(n * sizeof(int));
    break;
  case FLOAT:
    ptr = malloc(n * sizeof(float));
    break;
  case DOUBLE:
    ptr = malloc(n * sizeof(double));
    break;
  default:
    printf("Erro: Tipo inválido passado para get_arr_by_tipo\n");
    return NULL;
  }

  if (ptr == NULL) {
    printf("Falha ao alocar memoria get_arr_by_tipo\n");
    exit(1);
  }

  return ptr;
}

int *get_arr_int_fill_value(int n, int value) {
  int *arr = (int *)get_arr_by_tipo(n, INT);

  for (int i = 0; i < n; i++) {
    arr[i] = value;
  }

  return arr;
}

void free_arr(void *arr) {
  free(arr);
  arr = NULL;
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

char *reverse_string(char *str) {
  int n = strlen(str);

  char *inverted_str = (char *)get_arr_by_tipo(n, CHAR);

  if (inverted_str == NULL) {
    printf("Erro alocação de memoria");
    exit(1);
  }

  for (int i = n - 1, j = 0; i >= 0; i--, j++) {
    inverted_str[j] = str[i];
  }
  inverted_str[n] = '\0';

  return inverted_str;
}

int **get_matrix_diagonal_1(int l, int c) {
  int **mat = (int **)malloc(l * sizeof(int *));

  for (int i = 0; i < l; i++) {
    mat[i] = (int *)malloc(c * sizeof(int));

    mat[i][i] = 1;
  }

  return mat;
}