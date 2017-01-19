#include<iostream>
using namespace std;

int main() {
  int i, j, n;
  int x[100];

  cin >> n;
  for(i = 0; i < n; i++)
    cin >> x[i];
  for(j = n - 1; j >= 0; j--) {
    if (j == 0){
      cout << x[j];
      break;
    }
    cout << x[j] << " ";
  }
  cout << "\n";

  return 0;
}
