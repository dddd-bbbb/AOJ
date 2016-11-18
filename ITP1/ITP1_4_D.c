#include <stdio.h>
int main() {
  int min, max, i, n;
  long long int sum;

  scanf("%d", &n);
  int a[n];

  sum = 0;
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    sum += a[i];

    if (i == 0) {
      max = a[0];
      min = a[0];
    }

    if (a[i] > max) max = a[i];
    if (a[i] < min) min = a[i];
  }

  printf("%d %d %lld\n", min, max, sum);
  return 0;
}
