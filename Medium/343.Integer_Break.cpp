class Solution {
public:
    int integerBreak(int n) {
        if (n < 4)
            return (n-1);
        int div = n / 3;
        int mod = n % 3;
        if (mod == 0)
            return pow(3, div);
        if (mod == 1)
            return (pow(3, div-1) * 4);
        return (pow(3, div) * 2);
    }
};