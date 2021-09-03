#include <stdint.h>

uint32_t reverseBits(uint32_t n) {
    uint32_t out = 0;
    for (int i = 0; i < 32; i++, n >>= 1) {
        if (n % 2 == 1)
            out += (uint32_t) 1 << (31 - i);
    }
    return out;
}