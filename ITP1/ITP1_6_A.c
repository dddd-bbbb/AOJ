#include "stdio.h"
int main(void){
  int n;

  scanf("%d\n", &n);
  int ary_num[n];

  int i, j;

  for(i = 0; i < n; i++){
    scanf("%d", &ary_num[i]);
  }

  for(j = n - 1; j > 0; j--){
    printf("%d ", ary_num[j]);
  }

  printf("%d\n", ary_num[0]);
  return 0;
}
