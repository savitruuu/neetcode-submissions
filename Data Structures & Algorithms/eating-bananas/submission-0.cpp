class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int res = r;

        while(l<=r)
        {
            int mid = l+(r-l)/2;

            long long totalTime = 0;
            for(int p: piles)
            {
                totalTime+=ceil(static_cast<double>(p)/mid);
            }
            if(totalTime <= h)
            {
                res = mid;
                r = mid -1;
            }
            else
            {
                l = mid + 1;
            }

        }
        return res;


        
    }
};
