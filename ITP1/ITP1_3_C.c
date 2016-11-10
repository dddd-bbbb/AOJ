#include <stdio.h>
void swap(int *x, int *y){
  if (*x > *y) {
    int t = 0;
    t = *x;
    *x = *y;
    *y = t;
  }
}

int main() {

  int x, y;

  while (1) {
    scanf("%d %d", &x, &y);
    if ( x == 0 && y == 0) break;
    swap(&x, &y);
    printf("%d %d\n", x, y);
  }

  return 0;
}
