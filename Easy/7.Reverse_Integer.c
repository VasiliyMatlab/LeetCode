#include <math.h>

int reverse(int x){
    long rc = 0;
    while (x != 0){
        rc = rc * 10 + x % 10;
        x /= 10;
    }
    if ((rc < -pow(2,31)) || (rc > pow(2,31)-1))
        return 0;
    return (int)rc;
}