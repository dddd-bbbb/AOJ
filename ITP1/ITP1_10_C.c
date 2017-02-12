#include <math.h>
#include <stdio.h>
 
int main() {
    double datset_size, num_array[1000], sum, mean, sum_squared_diff, variance;
    int i;
 
    while (1) {
        sum = 0, mean = 0;
        sum_squared_diff = 0, variance = 0;
        for (i = 0; i < 1000; i++) {
            num_array[i] = 0;
        }
 
        scanf("%lf", &datset_size);
        if (datset_size == 0)
            break;
 
        for (i = 0; i < datset_size; i++) {
            scanf("%lf", &num_array[i]);
            sum += num_array[i];
        }
        mean = sum / datset_size;
 
        for (i = 0; i < datset_size; i++) {
            sum_squared_diff += pow(num_array[i] - mean, 2.0);
        }
 
        variance = sum_squared_diff / datset_size;
        printf("%.8f\n", sqrt(variance));
    }
 
    return 0;
}