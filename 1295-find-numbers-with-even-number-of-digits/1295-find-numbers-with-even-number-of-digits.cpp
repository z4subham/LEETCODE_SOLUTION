class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0 ; 
        int n = nums.size() ;

        for(int i=0 ; i<n ; i++){
            int ctr = 0 ;
            while(nums[i] != 0){
                int last_digit = nums[i] % 10 ;
                ctr++ ; 
                nums[i] = nums[i] / 10 ;
            }
            if(ctr % 2 == 0){
                ans++ ;
            }
        }

        return ans ;
    }
};