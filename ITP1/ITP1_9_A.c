#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
  char search_word[10], text_word[1000];
  int cnt = 0;
  unsigned int i;

  scanf("%s", search_word);

  while (1) {
    scanf("%s", text_word);
    if (strcmp(text_word, "END_OF_TEXT") == 0) break;

    for (i = 0; i < strlen(text_word); i++)
      text_word[i] = tolower(text_word[i]);
    for (i = 0; i < strlen(search_word); i++)
      search_word[i] = tolower(search_word[i]);
    if (strcmp(text_word, search_word) == 0) cnt += 1;
  }
  printf("%d\n", cnt);

  return 0;
}
