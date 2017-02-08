#include <stdio.h>
#include <string.h>

void print(char *str, int first, int last) {
    int i;
    int len = last - first + 1;
    for (i = 0; i < len; i++)
        printf("%c", str[first + i]);
    printf("\n");
}

void reverse(char *str, int first, int last) {
    int i, tmp;
    int len = last - first + 1;
    for (i = 0; i < len / 2; i++) {
        tmp = str[first + i];
        str[first + i] = str[last - i];
        str[last - i] = tmp;
    }
}

void replace(char *str, int first, int last, char *replace_str) {
    int i;
    int len = last - first + 1;
    for (i = 0; i < len; i++) {
        str[first + i] = replace_str[i];
    }
}

int main() {
    char str[1001], op_str[8], replace_str[1001];
    int q, a, b, i;

    scanf("%s", str);
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%s %d %d", op_str, &a, &b);

        if (strcmp(op_str, "print") == 0) {
            print(str, a, b);
        } else if (strcmp(op_str, "reverse") == 0) {
            reverse(str, a, b);
        } else {
            scanf("%s", replace_str);
            replace(str, a, b, replace_str);
        }
    }

    return 0;
}
