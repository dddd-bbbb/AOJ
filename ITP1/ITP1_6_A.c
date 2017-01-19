#include<stdio.h>

int main() {
  int i, j, n;
  int x[100];

  scanf("%d", &n);
  for(i = 0; i < n; i++)
    scanf("%d", &x[i]);
  for(j = n - 1; j >= 0; j--) {
    if (j == 0){
      printf("%d", x[j]);
      break;
    }
    printf("%d ", x[j]);
  }
  printf("\n");

  return 0;
}
