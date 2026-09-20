class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.length() ;
        int i = 0 ;


       
 
        if(s == "" && t == ""){
            return ' ' ;
        } 
        
        sort(s.begin() , s.end()) ;
        sort(t.begin() , t.end()) ; 

        while(i<n){
            if(s[i] != t[i]){
                return t[i] ;
            }
            i++ ;
        }
        return t[n] ;
    }
};