#include "algorithms.h"
#include <stdio.h>

int main() {
  int arr[] = {3, 5, 4, 1};

  int n = sizeof(arr) / sizeof(int);

  printf("Antes da ordenação:");
  print_arr(arr, n);

  merge_sort(arr, 0, n);

  printf("Após ordenação:");
  print_arr(arr, n);

  return 0;
}