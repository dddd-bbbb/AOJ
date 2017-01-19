#include<iostream>
using namespace std;

int main() {
  int x, y;

  while (1) {
    cin >> x >> y;
    if (x == 0 && y == 0) break;

    for(int i = 0; i < x; i++) {
      if (i % 2 == 0) {
        for (int j = 0; j < y; j++) {
          if ( j % 2 == 0)
            cout << "#";
          else
            cout << ".";
        }
        cout << "\n";
      } else {
        for (int j = 0; j < y; j++) {
          if ( j % 2 == 0)
            cout << ".";
          else
            cout << "#";
        }
        cout << "\n";
      }
    }
    cout << "\n";
  }

  return 0;
}
