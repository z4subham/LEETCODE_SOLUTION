class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        //find the largest :- 
        int n = nums.size() ;

        int larg = INT_MIN ;
        int larg_ind = -1 ; //stores the index of largest ele 

        //find the largest no. from the array :- 
        for(int i=0 ; i<n ; i++){
            if(nums[i] > larg){
                larg = nums[i] ;
                larg_ind = i ; 
            }
        }  

        //again iterate in arr :- 

        for(int i =0 ; i<n ; i++){ 
            
            if(i == larg_ind) {
                continue;
            }

            if(larg < 2 * nums[i]){
                return -1 ;
            }
        }
        return larg_ind ;
    }
};