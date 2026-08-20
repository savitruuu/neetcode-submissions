class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int m = 0;
        for (int num : nums) {
            if (num == 1) {
                count++;
                m = max(m, count);
            } else {
                count = 0;
            }
        }
        return m;
    }
};