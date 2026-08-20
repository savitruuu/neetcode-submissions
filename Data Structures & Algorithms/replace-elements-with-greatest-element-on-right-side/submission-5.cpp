class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            int rightM = -1;
            for (int j = i + 1; j < n; j++) {
                rightM = max(rightM, arr[j]);
            }
            result[i] = rightM;
        }
        return result;
    }
};