#include <stdio.h>

int main() {
  int x;
  int i = 1;
  while (3) {
    scanf("%d",&x);
    if (x == 0) break;

    printf("Case %d: %d\n", i++, x);
  }

  return 0;
}
