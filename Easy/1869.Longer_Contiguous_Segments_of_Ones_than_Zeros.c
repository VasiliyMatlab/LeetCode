#include <stdbool.h>
#include <string.h>

bool checkZeroOnes(char *s) {
    if (strlen(s) == 1) {
        if (s[0] - '0')
            return true;
        else
            return false;
    }
    int cnt_1 = 0;
    int cnt_0 = 0;
    int ones = 0;
    int zeros = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] - '0') {
            cnt_1++;
            zeros = (zeros < cnt_0) ? cnt_0 : zeros;
            cnt_0 = 0;
        }
        else {
            cnt_0++;
            ones = (ones < cnt_1) ? cnt_1 : ones;
            cnt_1 = 0;
        }
    }
    if (cnt_0)
        zeros = (zeros < cnt_0) ? cnt_0 : zeros;
    if (cnt_1)
        ones = (ones < cnt_1) ? cnt_1 : ones;
    return ones > zeros;
}

int main() {
    char str[] = "0";
    bool j = checkZeroOnes(str);
    return 0;
}