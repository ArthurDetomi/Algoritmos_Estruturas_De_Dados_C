#include <stdio.h>
#include <stdlib.h>

int main() {
  float arr[10];

  float v = 0.0f;

  for (int i = 0; i < 10; i++) {
    arr[i] = v;

    v += 1.5f;
  }

  printf("\tForma 1\n");
  for (int i = 0; i < 10; i++) {
    printf("Endereço %d = %p\n", i + 1, arr + i);
  }

  printf("\tForma 2\n");

  float *p = arr;

  for (int i = 0; i < 10; i++) {
    printf("Endereço %d = %p\n", i + 1, p + i);
  }

  return 0;
}