#include <stdbool.h>

unsigned countOnes(int n) {
    unsigned count = 0;
    while (n) {
        n &= n - 1;
        count++;
    }
    return count;
}

bool isPrime(int n) {
    if ((n == 0) || (n == 1))
        return false;
    if ((n == 2) || (n == 3))
        return true;
    for (int i = 2; i <= (int) sqrt((double) n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int countPrimeSetBits(int left, int right) {
    int count = 0;
    for (int i = left; i <= right; i++)
        if (isPrime(countOnes(i)))
            count++;
    return count;
}