#include <stdio.h>
#include <string.h>

int is_substring(char *str, int n1, char *sub_str, int n2) {
  if (n2 > n1) {
    return 0;
  }

  for (int i = 0; i < n1; i++) {

    if (*(str + i) == *sub_str) {
      int j = 0;

      while (i < n1 && j < n2 && *(str + i) == *(sub_str + j)) {
        if (i >= n1 - 1) {
          return 0;
        }

        i++;
        j++;
      }

      if (j == n2) {
        return 1;
      }
    }
  }

  return 0;
}

int main() {
  char str[50];
  char str2[50];

  scanf("%s", str);
  scanf("%s", str2);

  if (is_substring(str, strlen(str), str2, strlen(str2))) {
    printf("É substring\n");
  } else {
    printf("Não é substring\n");
  }
}