#include "util.h"
#include <stdio.h>

int main() {
  char str[50];

  scanf("%s", str);

  char *new_str = reverse_string(str);

  printf("%s\n", new_str);

  free_arr(new_str);

  return 0;
}