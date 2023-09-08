class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        for (size_t i = 1; i < (n+1); i++) {
            res[i] = count(i);
        }
        return res;
    }
private:
    int count(int n) {
        int cnt = 0;
        while (n) {
            cnt++;
            n &= (n-1);
        }
        return cnt;
    }
};