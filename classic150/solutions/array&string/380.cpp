class RandomizedSet {
private:
    std::vector<int> nums;
    std::unordered_map<int, int> val_to_index;

public:
    RandomizedSet() {}
    
    bool insert(int val) {
        if (val_to_index.find(val) != val_to_index.end()) {
            return false;
        }
        nums.push_back(val);
        val_to_index[val] = nums.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        auto it = val_to_index.find(val);
        if (it == val_to_index.end()) {
            return false;
        }
        int idx = it->second;
        int last_val = nums.back();
        nums[idx] = last_val;
        val_to_index[last_val] = idx;
        nums.pop_back();
        val_to_index.erase(val);
        return true;
    }
    
    int getRandom() {
        int random_index = rand() % nums.size();
        return nums[random_index];
    }
};
