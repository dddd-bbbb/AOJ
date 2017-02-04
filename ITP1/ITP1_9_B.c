#include <stdio.h>
#include <string.h>

int main () {
  char input_str[200];
  int i, j, h, shuffle_num;

  while (1) {
    scanf("%s", input_str);
    scanf("%d", &shuffle_num);
    if (input_str[0] == '-') break;

    j = 0;
    while (j != shuffle_num) {
      scanf("%d", &h);
      char front_str[200] = {0}, back_str[200] = {0};

      for (i = 0; i < strlen(input_str); i++) {
        if (i < h) front_str[i] = input_str[i];
        else back_str[i-h] = input_str[i];
      }

      strcpy(input_str, back_str);
      strcat(input_str, front_str);
      j += 1;
    }
    printf("%s\n", input_str);
  }
  return 0;
}
