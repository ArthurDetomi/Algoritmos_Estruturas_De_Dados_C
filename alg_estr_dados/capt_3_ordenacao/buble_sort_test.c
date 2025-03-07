#include "algorithms.h"
#include <stdio.h>

int main() {
  int arr[] = {3, 4, 5, 9, 2, 1};

  int n = sizeof(arr) / sizeof(int);

  printf("Antes da ordenação:");
  print_arr(arr, n);

  buble_sort(arr, n);

  printf("Após ordenação:");
  print_arr(arr, n);

  return 0;
}