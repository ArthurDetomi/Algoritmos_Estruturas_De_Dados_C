#include "algorithms.h"
#include <stdio.h>

int main() {
  int arr[] = {9, 5, 2, 7, 8, 1, 0, 6};

  int n = sizeof(arr) / sizeof(int);

  printf("Array antes da ordenação:\n");
  print_arr(arr, n);

  // Ordenation
  selection_sort(arr, n);

  printf("Array após ordenação:\n");
  print_arr(arr, n);

  return 0;
}