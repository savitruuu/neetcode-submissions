class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int result = 0;

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                result += customers[i];
            }
        }
        int extra = 0;
        int maxextra = 0;

        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1) {
                extra += customers[i];
            }
        }
        maxextra = extra;
        for (int i = minutes; i < n; i++) {
            if (grumpy[i] == 1) {
                extra += customers[i];
            }
            if (grumpy[i - minutes] == 1) {
                extra -= customers[i - minutes];
            }
            maxextra = max(extra, maxextra);
        }
        return result + maxextra;
    }
};