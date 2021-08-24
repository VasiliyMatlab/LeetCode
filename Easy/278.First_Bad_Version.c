int firstBadVersion(int n) {
    int left = 1;
    int right = n;
    while (left <= right) {
        if (isBadVersion(left))
            return left;
        else {
            int middle = left + (right - left) / 2;
            if (isBadVersion(middle)) {
                right = middle;
            }
            else {
                left = middle + 1;
            }
        }
    }
    return n;
}