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

void selection_sort(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    int pos_min_value = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[pos_min_value]) {
        pos_min_value = j;
      }
    }

    if (pos_min_value != i) {
      int aux = arr[i];

      arr[i] = arr[pos_min_value];
      arr[pos_min_value] = aux;
    }
  }
}

void insertion_sort(int *arr, int n) {
  for (int i = 1; i < n; i++) {
    int current_value = arr[i];

    int j = i;

    for (j = i; (j > 0) && current_value < arr[j - 1]; j--) {
      arr[j] = arr[j - 1];
    }

    arr[j] = current_value;
  }
}