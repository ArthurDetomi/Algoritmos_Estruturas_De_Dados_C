#include "util.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  int *arr = get_arr(n);

  for (int i = 0; i < n; i++) {
    int value;
    get_int_demiliter(&value, 0, n - 1);

    arr[i] = value;
  }

  print_arr(arr, n);

  free(arr);
  arr = NULL;

  return 0;
}