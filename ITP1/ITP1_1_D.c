#include <stdio.h>

int main(){

  int input_s, h, m, s;

  scanf("%d\n", &input_s);
  
  h = input_s / 3600;
  m = (input_s % 3600) / 60;
  s = (input_s % 3600) % 60;

  printf("%d:%d:%d\n", h, m, s);
  return 0;
}
