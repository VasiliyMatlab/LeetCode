#include <stdbool.h>

bool hasAlternatingBits(int n) {
    if (n == 1)
        return true;
    int prev = 2;
    while (n) {
        if ((prev == 1) && (n % 2 == 1))
            return false;
        if ((prev == 0) && (n % 2 == 0))
            return false;
        prev = n % 2;
        n >>= 1;
    }
    return true;
}