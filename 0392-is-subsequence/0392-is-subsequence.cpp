class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0 ; 
        int ctr = 0 ;
        for(int j=0 ; j< t.length() ; j++){
            if(t[j] == s[i]){
                ctr++ ;
                i++ ;
            }
        }
        if(ctr == s.length()){
            return true ;
        }
        return false ;
    }
};