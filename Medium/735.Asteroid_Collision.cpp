class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for (auto k: asteroids) {
            bool flag = true;

            while (!res.empty() && (res.back() > 0) && (k < 0)) {
                if (abs(k) > abs(res.back())) {
                    res.pop_back();
                } else if (abs(k) == abs(res.back())) {
                    res.pop_back();
                    flag = false;
                    break;
                } else {
                    flag = false;
                    break;
                }
            }

            if (flag)
                res.push_back(k);
        }
        return res;
    }
};