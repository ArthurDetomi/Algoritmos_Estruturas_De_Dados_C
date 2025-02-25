#include <stdio.h>
#include <stdlib.h>

typedef struct Register {
  char name[20];
  int age;
  float scores[3];
} Register;

int main() {
  int n;

  scanf("%d", &n);

  Register *registers = (Register *)malloc(n * sizeof(Register));

  for (int i = 0; i < n; i++) {
    printf("Name: ");
    scanf("%s", registers[i].name);

    printf("Age :");
    scanf("%d", &registers[i].age);

    printf("Notas:\n");

    for (int j = 0; j < 3; j++) {
      printf("Nota %d :", j + 1);
      scanf("%f", &registers[i].scores[j]);
    }
  }
  printf("\n\n");

  for (int i = 0; i < n; i++) {
    printf("Name: ");
    printf("%s", registers[i].name);

    printf("Age :");
    printf("%d", registers[i].age);

    printf("Notas:\n");
    for (int j = 0; j < 3; j++) {
      printf("Nota %d :", j + 1);

      printf("%f", registers[i].scores[j]);

      printf("\n");
    }
  }

  free(registers);
  registers = NULL;

  return 0;
}