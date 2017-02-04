#include <stdio.h>
#include <string.h>

int main() {
  char input_str[101], search_str[101], ring_str[201];

  scanf("%s", input_str);
  scanf("%s", search_str);

  strcpy(ring_str, input_str);
  strcat(ring_str, input_str);

  if (strstr(ring_str, search_str)) printf("Yes\n");
  else printf("No\n");

  return 0;
}
