#include <stdio.h>
#include <ctype.h>

int main() {
  char ch[1200];
  int i = 0;

  fgets(ch, sizeof(ch), stdin);

  while (ch[i]) {
    if (ch[i] >= 'a' && ch[i] <= 'z') printf("%c", toupper(ch[i]));
    else if (ch[i] >= 'A' && ch[i] <= 'Z') printf("%c", tolower(ch[i]));
    else printf("%c", ch[i]);
    i++;
  }
 
  return 0;
}
