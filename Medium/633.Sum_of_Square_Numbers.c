#include <stdbool.h>
#include <math.h>

bool judgeSquareSum(int c){
    for (long int a = 0; (a*a) <= c; a++) {
        double b = sqrt(c - a*a);
        if (b == (int) b)
            return true;
    }
    return false;
}