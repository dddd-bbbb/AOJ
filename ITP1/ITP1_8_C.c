#include<stdio.h>
#include<ctype.h>

int main() {
  int i, char_num, cnt[26] = {0};
  char character;

  while (scanf("%c", &character) != EOF) {
    if (islower(character)) {
      char_num = character - 'a';
      cnt[char_num] += 1;
    } else if (isupper(character)) {
      char_num = tolower(character) - 'a';
      cnt[char_num] += 1;
    }
  }

  for (i = 0; i < 26; i++) {
    printf("%c : %d\n", i + 'a', cnt[i]);
  }

  return 0;
}
