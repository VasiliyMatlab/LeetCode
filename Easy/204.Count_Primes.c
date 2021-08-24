#include <math.h>

int countPrimes(int n){
    if (n <= 2)
        return 0;
    n--;
    int out = 1;
    for (int i = 3; i <= n; i++) {
        if (i == 5) {
            out++;
            continue;
        }
        if (!(i % 2) || !(i % 5))
            continue;
        char flag = 0;
        for (int j = 3; j <= (int) sqrt((double) i); j++) {
            if (!(i % j)) {
                flag = 1;
                break;
            }
        }
        if (!flag)
            out++;
    }
    return out;
}