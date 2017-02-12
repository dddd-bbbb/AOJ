#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    double x[100], y[100], dist1, dist2, dist3, dist_inf, sum_squared_abs_diff,
        sum_cubed_abs_diff;
    int data_size, i;

    scanf("%d", &data_size);

    for (i = 0; i < data_size; i++) {
        scanf("%lf", &x[i]);
    }
    for (i = 0; i < data_size; i++) {
        scanf("%lf", &y[i]);
    }

    for (i = 0; i < data_size; i++) {
        dist1 += abs(x[i] - y[i]);
        sum_squared_abs_diff += pow(abs(x[i] - y[i]), 2.0);
        sum_cubed_abs_diff += pow(abs(x[i] - y[i]), 3.0);
    }
    dist2 = pow(sum_squared_abs_diff, 1.0 / 2);
    dist3 = pow(sum_cubed_abs_diff, 1.0 / 3);

    dist_inf = 0;
    for (i = 0; i < data_size; i++) {
        if (abs(x[i] - y[i]) >= dist_inf)
            dist_inf = abs(x[i] - y[i]);
    }

    printf("%.8f\n", dist1);
    printf("%.8f\n", dist2);
    printf("%.8f\n", dist3);
    printf("%.8f\n", dist_inf);

    return 0;
}
