class Solution {
public:
    int longestContinuousSubstring(string s) {
        int maxi = 1 ;
        int n = s.length() ;

        for(int i=0 ; i<n ; i++){
            int ctr = 1 ;
            for(int j=i+1 ; j<n ; j++){
         
                if(s[i] + (j-i) == s[j]){
                    ctr++ ; 
                    maxi = max(maxi , ctr) ;
                }
                else{
                    break ; 
                }
            }
        }
        return maxi ;
    }
};