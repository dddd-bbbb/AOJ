#include <stdio.h>
void answer(int *x, int array_size) {
    int i;
    for (i = 0; i < array_size; i++) {
        if (i >= 1)
            printf(" %d", x[i]);
        else
            printf("%d", x[i]);
    }
    printf("\n");
}

int main(void) {
    int i, j, n, x[101], tmp;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    for (i = 1; i <= n; i++) {
        answer(x, n);
        tmp = x[i];
        j = i - 1;

        while (j >= 0 && x[j] > tmp) {
            x[j + 1] = x[j];
            j -= 1;
        }
        x[j + 1] = tmp;
    }

    return 0;
}
