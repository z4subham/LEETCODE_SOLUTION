class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        string ans_ = "" ;
        for(int i=0 ; i < words.size() ; i++){
            string s = words[i] ;
             
            int m = 0 ;
            int n = words[i].size() - 1 ; 

            while( m < n){
                if(s[m] != s[n]){
                    break ;
                } 
                m++ ;
                n-- ;   
            } 

            if(m >= n){
                string ans = words[i] ; 
                return ans ;
            }
        }
        return ans_ ;
    }
};