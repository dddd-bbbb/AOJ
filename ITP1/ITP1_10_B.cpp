#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
using namespace std;
 
int main() {
    double a, b, S, L, h, l, rad;
    int C;
    cin >> a >> b >> C;
 
    rad = (M_PI / 180) * C;
    l = sqrt(a * a + b * b - 2 * a * b * cos(rad));
 
    S = (a * b * sin(rad)) * 0.5;
    L = (a + b + l);
    h = b * sin(rad);
 
    cout << std::fixed << std::setprecision(8);
    cout << S << endl;
    cout << L << endl;
    cout << h << endl;
 
    return 0;
}