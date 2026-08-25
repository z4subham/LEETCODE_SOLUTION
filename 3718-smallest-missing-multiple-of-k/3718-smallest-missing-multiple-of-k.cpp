class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size() ;
        int ans = -1 ;

       
        for(int i= 1 ;  ; i++){
            if( find(nums.begin(), nums.end(), i*k ) == nums.end() ){
                ans = i*k ;
                break ;
               }
        }
        return ans ;
    }
};