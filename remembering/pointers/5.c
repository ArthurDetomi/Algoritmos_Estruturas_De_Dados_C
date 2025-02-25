#include <stdio.h>

int main() {
  int arr[5];

  for (int i = 0; i < 5; i++) {
    scanf("%d", arr + i);
  }

  printf("\nResult:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d\n", *(arr + i) * 2);
  }

  return 0;
}