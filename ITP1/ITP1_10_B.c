#include <math.h>
#include <stdio.h>

int main() {
    double a, b, S, L, h, l, rad;
    int C;
    scanf("%lf %lf %d", &a, &b, &C);

    rad = (M_PI / 180) * C;
    l = sqrt(a * a + b * b - 2 * a * b * cos(rad));

    S = (a * b * sin(rad)) * 0.5;
    L = (a + b + l);
    h = b * sin(rad);

    printf("%lf\n", S);
    printf("%lf\n", L);
    printf("%lf\n", h);

    return 0;
}
