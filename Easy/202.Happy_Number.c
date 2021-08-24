#include <stdbool.h>

bool isHappy(int n){
    if (n == 1)
        return true;
    unsigned N = 10000;
    unsigned count = 0;
    while (count < N) {
        int M[20] = {0};
        int i = 0;
        while (n) {
            M[i] = n % 10;
            n /= 10;
            i++;
        }
        i--;
        n = 0;
        for (i; i >= 0; i--)
            n += M[i]*M[i];
        if (n == 1)
            return true;
        count++;
    }
    return false;
}