#include <stdio.h>

int main() {
  int m, f, r, total;

  while (1) {
    scanf("%d %d %d", &m, &f, &r);
    if (m == -1 && r == -1 && f == -1) break;

    total = m + f;
    if (m == -1 || f == -1) printf("F\n");
    else if (total >= 80) printf("A\n");
    else if (total >= 65) printf("B\n");
    else if (total >= 50) printf("C\n");
    else if (total >= 30) (r >= 50) ? printf("C\n") : printf("D\n");
    else printf("F\n");
  }

  return 0;
}
