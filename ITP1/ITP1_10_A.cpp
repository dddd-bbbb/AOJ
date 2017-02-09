#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2, x21, y21, dist;
    cin >> x1 >> y1 >> x2 >> y2;
    x21 = x1 - x2, y21 = y2 - y1;
    dist = sqrt(x21 * x21 + y21 * y21);
    std::cout << std::fixed << std::setprecision(8) << dist << std::endl;

    return 0;
}
