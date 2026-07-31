class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        set<int> result;
        for (int num : nums) {
            result.insert(num);
        }
        int i = 0;
        for (int num : result) {
            nums[i] = num;
            i++;
        }

        return result.size();
    }
};