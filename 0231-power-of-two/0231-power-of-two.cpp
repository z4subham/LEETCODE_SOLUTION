class Solution {
public:
    bool isPowerOfTwo(int n) {
        int low = 0 ;
        int high = n ;

        while( low <= high){
            int mid = (low + high) / 2 ;

            if(pow(2,mid) == n){
                return true ;
            }
            else if(pow(2,mid) > n){
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        return false ;
    }
};