#include <stdio.h>
int main() {
  int x, y, i, j;

  while (1) {
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0) break;

    for(i = 0; i < x; i++) {
      if (i % 2 == 0) {
        for (j = 0; j < y; j++) {
          if ( j % 2 == 0)
            printf("#");
          else
            printf(".");
        }
        printf("\n");
      } else {
        for (j = 0; j < y; j++) {
          if ( j % 2 == 0)
            printf(".");
          else
            printf("#");
        }
        printf("\n");
      }
    }
    printf("\n");
  }

  return 0;
}
