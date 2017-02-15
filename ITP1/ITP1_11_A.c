#include <stdio.h>

typedef struct { int label[6]; } dice;

int main() {
    int i, tmp;
    char direction[101];
    dice dice;

    for (i = 0; i < 6; i++) {
        scanf("%d", &(dice.label[i]));
    }

    scanf("%s", direction);
    for (i = 0; i < (int)strlen(direction); i++) {
        switch (direction[i]) {
        case 'N':
            tmp = dice.label[4];
            dice.label[4] = dice.label[0];
            dice.label[0] = dice.label[1];
            dice.label[1] = dice.label[5];
            dice.label[5] = tmp;
            break;
        case 'S':
            tmp = dice.label[1];
            dice.label[1] = dice.label[0];
            dice.label[0] = dice.label[4];
            dice.label[4] = dice.label[5];
            dice.label[5] = tmp;
            break;
        case 'E':
            tmp = dice.label[2];
            dice.label[2] = dice.label[0];
            dice.label[0] = dice.label[3];
            dice.label[3] = dice.label[5];
            dice.label[5] = tmp;
            break;
        case 'W':
            tmp = dice.label[3];
            dice.label[3] = dice.label[0];
            dice.label[0] = dice.label[2];
            dice.label[2] = dice.label[5];
            dice.label[5] = tmp;
            break;
        }
    }
    printf("%d\n", dice.label[0]);

    return 0;
}