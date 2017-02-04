#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main () {
  string search_word, text_word;
  int cnt = 0;
  unsigned int i;

  cin >> search_word;

  while (1) {
    cin >> text_word;
    if (text_word == "END_OF_TEXT") break;

    for (i = 0; i < text_word.size(); i++)
      text_word[i] = tolower(text_word[i]);
    for (i = 0; i < search_word.size(); i++)
      search_word[i] = tolower(search_word[i]);
    if (text_word == search_word) cnt += 1;
  }
  cout << cnt << endl;

  return 0;
}
