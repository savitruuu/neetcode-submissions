class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int maxE = -1;
            for (int j = i + 1; j < n; j++) {
                maxE = max(maxE, arr[j]);
            }
            arr[i] = maxE;
        }
        return arr;
    }
};