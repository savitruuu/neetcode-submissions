class Solution {
   public:
    int minimumRecolors(string nums, int k) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (nums[i] == 'W') {
                count++;
            }
        }

        int maxCount = count;
        int l = 0;
        for (int r = k; r < n; r++) {
            if(nums[r] == 'W'){
                count++;
            }
            if(nums[l] == 'W'){
                count--;
            }
            l++;
            maxCount = min(maxCount, count);
        }
        return maxCount;
    }
};