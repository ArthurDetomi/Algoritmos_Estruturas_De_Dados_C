#include "algorithms.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

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

void merge(int *arr, int start, int middle, int end) {
  int *temp, p1, p2, size, i, j, k;
  int end1 = 0, end2 = 0;
  size = end - start + 1;
  p1 = start, p2 = middle + 1;

  temp = (int *)malloc(size * sizeof(int));
  if (temp != NULL) {
    for (i = 0; i < size; i++) {
      if (!end1 && !end2) {
        if (arr[p1] < arr[p2]) {
          temp[i] = arr[p1++];
        } else {
          temp[i] = arr[p2++];
        }

        if (p1 > middle) {
          end1 = 1;
        }
        if (p2 > end) {
          end2 = 1;
        }
      } else {
        if (!end1) {
          temp[i] = arr[p1++];
        } else {
          temp[i] = arr[p2++];
        }
      }
    }
  }

  for (j = 0, k = start; j < size; j++, k++) {
    arr[k] = temp[j];
  }
  free(temp);
}

void merge_sort(int *arr, int start, int end) {
  int middle;
  if (start < end) {
    middle = floor((start + end) / 2);
    merge_sort(arr, start, middle);
    merge_sort(arr, middle + 1, end);
    merge(arr, start, middle, end);
  }
}