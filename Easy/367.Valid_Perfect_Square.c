#include <stdbool.h>

bool isPerfectSquare(int num){
    for (long int a = 0; (a*a) <= num; a++) {
        if (a*a == num)
            return true;
    }
    return false;
}