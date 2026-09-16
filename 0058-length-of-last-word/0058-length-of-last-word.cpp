class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.length() - 1;
        int i = n ;
        int ctr = 0 ;

       // for removing the spaces :- 
        while (i >= 0 && s[i] == ' '){
            i-- ;
        }

        while(i>=0 && s[i] != ' '){
            ctr++ ;
            i-- ;
        } 

        return ctr ;
    }
};