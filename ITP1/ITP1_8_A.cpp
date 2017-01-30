#include <iostream>
#include <cctype>
using namespace std;

int main() {
  string str;
  int i = 0;

  getline(cin, str);

  while (str[i]) {
    char ch;
    if (islower(str[i])) ch = toupper(str[i]);
    else if (isupper(str[i])) ch = tolower(str[i]);
    else ch = str[i];

    cout << ch;
    i++;
  }
  cout << endl;

  return 0;
}
