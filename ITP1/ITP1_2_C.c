#include <stdio.h>
void swap(int *x,int *y){
  int t;
  if (*x > *y){
    t = *y;
    *y = *x;
    *x = t;
  }
}

int main(){

  int a, b, c;
  scanf("%d %d %d\n", &a, &b, &c);

  swap(&a, &b);
  swap(&a, &c);
  swap(&b, &c);

  printf("%d %d %d\n", a, b, c);

  return 0;
}
