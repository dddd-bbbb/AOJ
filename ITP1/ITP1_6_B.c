#include<stdio.h>

int main() {
  int n, i, j, k, d;
  char c;
  int cards[4][13];

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 13; j++)
      cards[i][j] = 0;
  }

  scanf("%d", &n);

  for(k = 0; k < n + 1; k++) {
    scanf(" %c %d", &c, &d);
    if (c == 'S')
      cards[0][d - 1] = 1;
    else if (c == 'H')
      cards[1][d - 1] = 1;
    else if (c == 'C')
      cards[2][d - 1] = 1;
    else if (c == 'D')
      cards[3][d - 1] = 1;
  }

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 13; j++){
      if (cards[i][j] == 0) {
        if (i == 0)
          printf("S %d\n", j + 1);
        else if (i == 1)
          printf("H %d\n", j + 1);
        else if (i == 2)
          printf("C %d\n", j + 1);
        else if (i == 3)
          printf("D %d\n", j + 1);
      }
    }
  }

  return 0;
}
