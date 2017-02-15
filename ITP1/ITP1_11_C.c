#include <stdio.h>

typedef struct { int label[6]; } dice;

void roll_N(dice *x) {
    int tmp;
    tmp = x->label[4];
    x->label[4] = x->label[0];
    x->label[0] = x->label[1];
    x->label[1] = x->label[5];
    x->label[5] = tmp;
}

void roll_S(dice *x) {
    int tmp;
    tmp = x->label[1];
    x->label[1] = x->label[0];
    x->label[0] = x->label[4];
    x->label[4] = x->label[5];
    x->label[5] = tmp;
}

void roll_E(dice *x) {
    int tmp;
    tmp = x->label[2];
    x->label[2] = x->label[0];
    x->label[0] = x->label[3];
    x->label[3] = x->label[5];
    x->label[5] = tmp;
}

void roll_W(dice *x) {
    int tmp;
    tmp = x->label[3];
    x->label[3] = x->label[0];
    x->label[0] = x->label[2];
    x->label[2] = x->label[5];
    x->label[5] = tmp;
}

void rotate(dice *x) {
    int tmp;
    tmp = x->label[1];
    x->label[1] = x->label[2];
    x->label[2] = x->label[4];
    x->label[4] = x->label[3];
    x->label[3] = tmp;
}

int main() {
    dice dice_a, dice_b;
    int i;

    for (i = 0; i < 6; i++) {
        scanf("%d", &(dice_a.label[i]));
    }
    for (i = 0; i < 6; i++) {
        scanf("%d", &(dice_b.label[i]));
    }

    // サイコロaを回しまずサイコロの上面を一致させる
    if (dice_b.label[0] == dice_a.label[1])
        roll_N(&dice_a);
    else if (dice_b.label[0] == dice_a.label[2])
        roll_W(&dice_a);
    else if (dice_b.label[0] == dice_a.label[3])
        roll_E(&dice_a);
    else if (dice_b.label[0] == dice_a.label[4])
        roll_S(&dice_a);
    else if (dice_b.label[0] == dice_a.label[5]) {
        roll_N(&dice_a);
        roll_N(&dice_a);
    }

    // 側面に関して
    for (i = 0; i < 4; i++) {
        // サイコロbとサイコロaの前面が一致した場合
        if (dice_b.label[1] == dice_a.label[1]) {
            if (dice_b.label[2] == dice_a.label[2] &&
                dice_b.label[3] == dice_a.label[3] &&
                dice_b.label[4] == dice_a.label[4] &&
                dice_b.label[5] == dice_a.label[5]) {
                printf("Yes\n");
                break;
            } else {
                printf("No\n");
                break;
            }
        } else {
            if (i == 3) {
                printf("No\n");
                break;
            }
        }
        rotate(&dice_a);
    }

    return 0;
}