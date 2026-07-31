class Solution {
   public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                result.push_back(nums[i]);
            }
        }
        while (result.size() < n) {
            result.push_back(0);
        }
        for (int i = 0; i < n; i++) {
            nums[i] = result[i];
        }
    }
};