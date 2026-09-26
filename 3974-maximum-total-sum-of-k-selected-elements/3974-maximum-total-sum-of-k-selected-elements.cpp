class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long sum = 0 ;

        int n = nums.size() ;

        sort(nums.begin() , nums.end()) ;

        for(int i = n-1 ; i>= n-k ; i--){

            if(mul <= 0){
                sum = sum + nums[i] ; 
            }
            else{
                sum = sum + ( 1LL * nums[i] * mul); 
            }

            // if(mul == 0){
            //     sum = sum + nums[i] + mul ; 
            // }

            mul-- ;
        }
        return sum ;
    }
};