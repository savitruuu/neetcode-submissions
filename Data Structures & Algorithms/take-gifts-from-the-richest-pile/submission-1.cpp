class Solution {
   public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> maxHeap;

        for (int g : gifts) {
            maxHeap.push(g);
        }

        long long result = 0;

        while (k--) {
            int first = maxHeap.top();
            maxHeap.pop();

            first = floor(sqrt(first));
            maxHeap.push(first);
        }

        while(!maxHeap.empty()){
            result += maxHeap.top();
            maxHeap.pop();
        }

        return result;
    }
};