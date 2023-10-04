class MyHashMap {
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        storage[key] = value;
    }
    
    int get(int key) {
        if (storage.contains(key))
            return storage[key];
        return -1;
    }
    
    void remove(int key) {
        if (storage.contains(key))
            storage.erase(key);
    }

private:
    unordered_map<int, int> storage;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */