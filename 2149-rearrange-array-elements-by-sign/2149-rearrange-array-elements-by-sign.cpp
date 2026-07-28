class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size() ;
        vector<int> ans(n) ;
        
        int pos_ind = 0 ;
        int neg_ind = 1 ;

        for(int i=0 ; i<n ; i++){
            if(nums[i] >= 0){
                ans[pos_ind] = nums[i] ;
                pos_ind = pos_ind + 2 ;
            }
            else{
                ans[neg_ind] = nums[i] ;
                neg_ind = neg_ind + 2 ;
            }
        }

        return ans ;
    }
};