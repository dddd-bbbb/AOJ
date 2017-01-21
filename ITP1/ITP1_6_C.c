#include<stdio.h>

int main() {
  int ary[4][3][10] = {0};
  int n;
  int i, j, k;
  int a, b, c, d;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ary[a-1][b-1][c-1] += d;
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 10; k++) {
        printf(" %d", ary[i][j][k]);
      }
      printf("\n");
    }
    if ( i <= 2 ) printf("####################\n");
  }

  return 0;
}
