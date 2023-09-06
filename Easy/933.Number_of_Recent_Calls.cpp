class RecentCounter {
public:
    RecentCounter() {
    
    }
    
    int ping(int t) {
        times.push(t);
        while (times.front() < (t - 3000)) {
            times.pop();
        }
        return times.size();
    }
private:
    queue<int> times;
};