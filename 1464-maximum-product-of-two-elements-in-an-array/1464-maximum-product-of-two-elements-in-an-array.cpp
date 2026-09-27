class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size() ;

        sort(nums.begin() , nums.end()) ;

        long long a = nums[n-1] - 1 ;
        long long b = nums[n-2] - 1 ;

        long long prod = a * b ;

        return prod ;
    }
};