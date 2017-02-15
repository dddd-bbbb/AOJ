#include <stdio.h>
#include <string.h>

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

int main() {
    dice dice;
    int i, input_times, input_top, input_front;

    for (i = 0; i < 6; i++) {
        scanf("%d", &(dice.label[i]));
    }

    scanf("%d", &input_times);
    for (i = 0; i < input_times; i++) {

        scanf("%d %d", &input_top, &input_front);

        if (input_top == dice.label[1])
            roll_N(&dice);
        else if (input_top == dice.label[2])
            roll_W(&dice);
        else if (input_top == dice.label[3])
            roll_E(&dice);
        else if (input_top == dice.label[4])
            roll_S(&dice);
        else if (input_top == dice.label[5]) {
            roll_S(&dice);
            roll_S(&dice);
        }

        if (input_front == dice.label[1]) {
            printf("%d\n", dice.label[2]);
        } else if (input_front == dice.label[2]) {
            printf("%d\n", dice.label[4]);
        } else if (input_front == dice.label[3]) {
            printf("%d\n", dice.label[1]);
        } else if (input_front == dice.label[4]) {
            printf("%d\n", dice.label[3]);
        }
    }
    return 0;
}