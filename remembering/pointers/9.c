#include <stdio.h>

void print_array(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", *(arr + i));
  }
}

int main() {

  int arr[5] = {1, 2, 3, 4, 5};

  int n = sizeof(arr) / sizeof(int);

  print_array(arr, n);

  return 0;
}