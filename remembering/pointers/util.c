#include "util.h"
#include <stdio.h>

void print_largest_address(int *a, int *b) {
  if (a > b) {
    printf("O endereço de a é maior %p\n", a);
  } else {
    printf("O endereço de b é maior %p\n", b);
  }
}