int hammingDistance(int x, int y) {
    int diff = 0;
    while (x || y) {
        if ((x % 2) != (y % 2))
            diff++; 
        x >>= 1;
        y >>= 1;
    }
    return diff;
}