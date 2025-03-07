#include "algorithms.h"
#include <stdio.h>

void buble_sort(int *arr, int n) {
  int swapped;

  do {
    swapped = 0;

    for (int i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        int aux = arr[i];

        arr[i] = arr[i + 1];
        arr[i + 1] = aux;

        swapped = 1;
      }
    }

  } while (swapped);
}

void print_arr(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}