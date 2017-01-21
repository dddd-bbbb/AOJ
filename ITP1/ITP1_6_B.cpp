#include<iostream>
using namespace std;

int main() {
  int n, i, j, k, d;
  char c;
  int cards[4][13];

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 13; j++)
      cards[i][j] = 0;
  }

  cin >> n;

  for(k = 0; k < n + 1; k++) {
    cin >> c >> d;
    if (c == 'S')
      cards[0][d - 1] = 1;
    else if (c == 'H')
      cards[1][d - 1] = 1;
    else if (c == 'C')
      cards[2][d - 1] = 1;
    else if (c == 'D')
      cards[3][d - 1] = 1;
  }

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 13; j++){
      if (cards[i][j] == 0) {
        if (i == 0)
          cout << "S " << j + 1 << endl;
        else if (i == 1)
          cout << "H " << j + 1 << endl;
        else if (i == 2)
          cout << "C " << j + 1 << endl;
        else if (i == 3)
          cout << "D " << j + 1 << endl;
      }
    }
  }
  return 0;
}
