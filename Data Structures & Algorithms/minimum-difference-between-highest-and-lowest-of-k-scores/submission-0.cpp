class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int diff;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<=n-k; i++)
        {
            diff = min(diff, nums[i+k-1]-nums[i]);
        }
        return diff;
        
    }
};