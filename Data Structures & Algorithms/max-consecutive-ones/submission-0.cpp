class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0;
        int count = 0;
        for (int num : nums) {
            if (num == 1) {
                count++;
                m = max(count, m);
            }else{
                count = 0;
            }

        }
        return m;
    }
};