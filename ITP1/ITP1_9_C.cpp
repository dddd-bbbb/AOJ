#include <iostream>
#include <string>
using namespace std;

int main() {
    int loop_num, tarou_score = 0, hanako_score = 0;
    string s1, s2;

    cin >> loop_num;
    for (int i = 0; i < loop_num; i++) {
        cin >> s1 >> s2;
        if (s1 > s2)
            tarou_score += 3;
        else if (s1 < s2)
            hanako_score += 3;
        else
            tarou_score += 1, hanako_score += 1;
    }
    cout << tarou_score << " " << hanako_score << endl;

    return 0;
}
