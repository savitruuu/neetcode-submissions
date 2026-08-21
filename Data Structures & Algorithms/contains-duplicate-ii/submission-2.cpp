class Solution {
   public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        unordered_set<int> st;

        for (int r = 0; r < n; r++) {
            if (st.count(nums[r])) {
                return true;
            }
            st.insert(nums[r]);

            if (r - l + 1 > k) {
                st.erase(nums[l]);
                l++;
            }
        }
        return false;
    }
};