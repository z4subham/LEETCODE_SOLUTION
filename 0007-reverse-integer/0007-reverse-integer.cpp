class Solution {
public:
    int reverse(int x) {
        long long reverse_no = 0 ;
 
        while( x != 0){
            int last_dig = x % 10 ;
            reverse_no = (reverse_no * 10) + last_dig ;
            x = x / 10 ;
        }
        
        if( reverse_no > INT_MAX || reverse_no < INT_MIN){
            return 0 ;
        }
        
        return reverse_no ;
    }
};