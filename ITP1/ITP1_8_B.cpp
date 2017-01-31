#include <iostream>
using namespace std;

int main() {
  string num_ch;
  int sum;

  while (1) {
    cin >> num_ch;
    if (num_ch[0] == '0') break;

    for (unsigned int i = 0; i < num_ch.size(); i++) {
      sum += num_ch[i] - '0';
    }
    cout << sum << endl;
    sum = 0;
  }

  return 0;
}
