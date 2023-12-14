#include <stdio.h>

void checkSpeed(int *speed, int length) {
    int countsp = 0, countM = 0, counts = 0;
    int SumSP = 0, SumM = 0, SumS = 0;

    for (int i = 0; i < length; i++) {
        if (*(speed + i) >= 90) {
            SumSP += *(speed + i);
            countsp++;
        } else if (*(speed + i) >= 50 && *(speed + i) <= 89) {
            SumM += *(speed + i);
            countM++;
        } else {
            SumS += *(speed + i);
            counts++;
        }
    }

    int ans1, ans2, ans3; 
    ans1 = countsp > 0 ? SumSP / countsp : 0;
    ans2 = countM > 0 ? SumM / countM : 0;
    ans3 = counts > 0 ? SumS / counts : 0;

    printf("%d %d %d %d %d %d\n", ans1, ans2, ans3, countsp,countM,counts);
}

int main() {
    int speed[27] = {43, 23, 54, 57, 68, 51, 90, 33, 22, 11, 88, 34, 52, 75, 12, 78, 32, 89, 14, 65, 67, 97, 52, 10, 47, 34};
    int length = sizeof(speed) / sizeof(speed[0]); 

    checkSpeed(speed, length);

    return 0;
}
