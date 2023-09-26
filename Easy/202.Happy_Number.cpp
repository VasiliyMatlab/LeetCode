class Solution {
public:
    bool isHappy(int n) {
        set<int> storage;
        while ((n != 1) && !storage.contains(n)) {
            storage.insert(n);
            n = next_num(n);
        }
        return (n == 1);
    }

private:
    int next_num(int n) {
        int next_num = 0;
        while (n) {
            int tmp = n % 10;
            next_num += tmp * tmp;
            n /= 10;
        }
        return next_num;
    }
};