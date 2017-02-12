#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    while (1) {
        double datset_size, sum = 0, mean = 0, sum_squared_diff = 0,
                            variance = 0, num_array[1000] = {0};

        cin >> datset_size;
        if (datset_size == 0)
            break;

        for (int i = 0; i < datset_size; i++) {
            cin >> num_array[i];
            sum += num_array[i];
        }
        mean = sum / datset_size;

        for (int i = 0; i < datset_size; i++) {
            sum_squared_diff += pow(num_array[i] - mean, 2.0);
        }

        variance = sum_squared_diff / datset_size;
        cout << fixed << setprecision(8) << sqrt(variance) << endl;
    }

    return 0;
}
