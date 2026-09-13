class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.length() ;
        int ctr = 0 ; 

        //skip the empty spaces :- 
        int i = n-1 ;
        while(i>=0 && s[i] == ' '){
            i-- ;
        }
        //counting the character :- 
        while(i>= 0 && s[i] !=  ' '){
            ctr++ ;
            i-- ;
        }
        return ctr ;
    }
};