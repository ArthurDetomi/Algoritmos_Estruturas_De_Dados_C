#include <stdio.h>

void fill_array(int *arr, int n, int value) {
  for (int i = 0; i < n; i++) {
    *(arr + i) = value;
  }
}

void print_array(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", *(arr + i));
  }
}

int main() {

  int arr[5];

  int n = sizeof(arr) / sizeof(int);

  fill_array(arr, n, 2);

  print_array(arr, n);

  return 0;
}