class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> freq;

        for (int a : arr) {
            freq[a]++;
        }

        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (auto& p : freq) {
            minHeap.push(p.second);
        }

        while (k > 0 && !minHeap.empty()) {
            int f = minHeap.top();
            minHeap.pop();

            if (k >= f) {
                k -= f;
            } else {
                minHeap.push(f);
                break;
            }
        }

        return minHeap.size();
    }
};