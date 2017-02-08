#include <stdio.h>
#include <string.h>

int main() {
    int i, loop_num, judge_flag, tarou_score = 0, hanako_score = 0;
    char s1[101];
    char s2[101];

    scanf("%d", &loop_num);
    for (i = 0; i < loop_num; i++) {
        scanf("%s %s", s1, s2);
        judge_flag = strcmp(s1, s2);

        if (judge_flag > 0)
            tarou_score += 3;
        else if (judge_flag < 0)
            hanako_score += 3;
        else
            tarou_score += 1, hanako_score += 1;
    }
    printf("%d %d\n", tarou_score, hanako_score);

    return 0;
}
