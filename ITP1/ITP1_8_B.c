#include <stdio.h>

int main() {
  char num_ch[1001];
  int i, num, sum;

  while (1) {
    scanf("%s", num_ch);
    if (num_ch[0] == '0') break;

    i = 0;
    sum = 0;
    while (num_ch[i]) {
      num = num_ch[i] - '0';
      sum += num;
      i += 1;
    }
    printf("%i\n", sum);
  }

  return 0;
}
