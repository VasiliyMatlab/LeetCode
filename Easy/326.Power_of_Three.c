#include <stdbool.h>

bool isPowerOfThree(int n) {
    if ((n % 3 != 0) && (n != 1))
        return false;
    if (n == 0)
        return false;
    if (n == 1)
        return true;
    unsigned int num = 1;
    for (int i = 1; i < 20; i++) {
        num *= 3;
        if (n == num)
            return true;
    }
    return false;
}