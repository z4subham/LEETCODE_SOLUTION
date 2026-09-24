class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size() ;
        
        int ans = -1 ; 

        for(int i=0 ; i<n ; i++){
            int num = 0 ;  
            int temp = nums[i] ;

            while( temp != 0){
                int last_dig = temp % 10 ;
                temp = temp / 10 ; 
                num = num  + last_dig ;
            } 

            if(num ==  i ){
                return i ;
            }
        }

        return ans ;
    }
};