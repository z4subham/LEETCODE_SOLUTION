class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {

        long long n = prices.size();
        long long ctr = n;
        long long len = 1;

        for(long long i = 1; i < n; i++) {

            if(prices[i-1] - prices[i] == 1) {
                len++;
                ctr = ctr + len - 1;
            }
            else {
                len = 1;
            }
        }

        return ctr;
    }
};