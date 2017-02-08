#include <math.h>
#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x21, y21, dist;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    x21 = x1 - x2, y21 = y2 - y1;
    dist = sqrt(pow(x21, 2) + pow(y21, 2));
    printf("%lf", dist);

    return 0;
}
