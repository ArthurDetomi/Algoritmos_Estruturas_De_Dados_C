#include <stdio.h>
#include <stdlib.h>

int main() {
  int N;

  scanf("%d", &N);

  int *arr = (int *)malloc(N * sizeof(int));

  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < N; i++) {
    printf("%d\n", arr[i]);
  }

  free(arr);
  arr = NULL;

  return 0;
}