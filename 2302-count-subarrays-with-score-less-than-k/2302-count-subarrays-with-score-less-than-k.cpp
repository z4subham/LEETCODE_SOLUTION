class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) { 

        int n = nums.size();
        long long ctr = 0;
        long long sum = 0;

        int i = 0;

        for(int j = 0; j < n; j++) {

            sum = sum + nums[j];

            while(sum * (j - i + 1) >= k) {
                sum = sum - nums[i];
                i++;
            }

            ctr = ctr + (j - i + 1);
        }

        return ctr;
    }
};