class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> unique;
        for (int num : nums) {
            unique.insert(num);
        }
        if (unique.size() == nums.size()) {
            return false;
        }
        return true;
    }
};