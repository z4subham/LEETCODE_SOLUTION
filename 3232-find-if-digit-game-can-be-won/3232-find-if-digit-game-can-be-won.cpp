class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size() ;

        // int alice = 0 ;
        // int bob = 0 ; 
 
        int double_dig = 0 ;
        int single_dig = 0 ; 

        for(int i=0 ; i<n ; i++){
            int ctr = 0 ;
            int temp = nums[i] ;
    //it checks that the number is single digit or double digit :- 
            while( temp != 0){
                ctr++ ;
                temp = temp / 10 ;
            } 

            if(ctr >= 2){
                double_dig = double_dig + nums[i] ;
            }
            else{
                single_dig = single_dig + nums[i] ;
            }
        } 

        if(double_dig != single_dig){
            return true ;
        }
        return false ;
    }
};