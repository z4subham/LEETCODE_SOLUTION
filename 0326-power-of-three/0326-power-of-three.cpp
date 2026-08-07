class Solution {
public:
    bool isPowerOfThree(int n) {
        int low = 0 ;
        int high = n ;
 


        if(n <= 0){
            return false ;
        }
        while(low <= high){
            int mid = low + ( high - low ) / 2 ;
            
        
            if(pow( 3 , mid) == n){
                return true ;
            }
            else if( pow(3 , mid) > n ){
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        return false ;
    }
};