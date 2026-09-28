class Solution {
public:
    int maxDepth(string s) {
        int n = s.length() ;

        int maxi = 0 ;
        int ctr = 0 ;

        for(int i=0 ; i<n ; i++){
            if(s[i] == '('){
                ctr++ ;
                maxi = max(maxi , ctr);
            }
            else if(s[i] == ')'){
                ctr-- ;
                maxi = max(maxi , ctr);
            }
            else{
                continue ;
            }
        }
        return maxi ;
    }
};