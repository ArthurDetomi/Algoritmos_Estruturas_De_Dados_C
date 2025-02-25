#include <stdio.h>

typedef struct student {
  int registration;
  char name[50];
  float scores[3];
} student;

int main() {

  printf("%ld bytes\n", sizeof(student));
  return 0;
}