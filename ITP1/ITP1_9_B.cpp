#include <iostream>
#include <string>
using namespace std;

int main() {
  string input_str;
  int j, h, shuffle_num;

  while (1) {
    cin >> input_str >> shuffle_num;
    if (input_str[0] == '-')
      break;

    j = 0;
    while (j != shuffle_num) {
      cin >> h;
      string back_str = input_str.substr(0, h);
      string front_str = input_str.substr(h, input_str.size());
      input_str = front_str + back_str;

      j += 1;
    }
    cout << input_str << endl;
  }
  return 0;
}
