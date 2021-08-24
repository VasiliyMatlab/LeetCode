#include <stdbool.h>

bool isPowerOfTwo(int n){
    if ((n % 2 == 1) && (n != 1))
        return false;
    int k = 1;
    for (int i = 0; i < 30 && k <= n; i++, k *= 2)
        if (k == n) return true;
    if (k == n) return true;
    return false;
}