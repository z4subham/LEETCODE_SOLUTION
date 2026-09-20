class Solution {
public:
    int reverseDegree(string s) {
        if(s == ""){
            //if string is empty return 0 
            return 0 ;
        } 
        
        int rev_ind = 26 ;
        int prod = 0 ; 

        for(int i=1 ; i<= s.length() ; i++){
            prod = prod + (rev_ind - (s[i-1] -'a')) * i ;
        }
        return prod ;
    }
};