class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> st;
        for (int num : nums) {
            st.insert(num);
        }
        if (nums.size() == st.size()) {
            return false;
        }
        return true;
    }
};