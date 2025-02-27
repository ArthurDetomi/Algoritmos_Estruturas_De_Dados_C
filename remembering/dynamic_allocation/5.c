#include "util.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  get_int_demiliter(&n, 0, 999);

  int *arr = (int *)malloc(n * sizeof(int));

  printf("\nFill array...\n");
  for (int i = 0; i < n; i++) {
    get_int_demiliter(&arr[i], 2, 9999);
  }

  print_arr(arr, n);

  free(arr);
  arr = NULL;

  return 0;
}