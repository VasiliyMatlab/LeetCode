#include <stdbool.h>

bool isPowerOfFour(int n) {
    if (n == 0)
        return false;
    if (n == 1)
        return true;
    if (n % 4 != 0)
        return false;
    unsigned int num = 1;
    for (int i = 0; i < 15; i++) {
        num *= 4;
        if (n == num)
            return true;
    }
    return false;
}