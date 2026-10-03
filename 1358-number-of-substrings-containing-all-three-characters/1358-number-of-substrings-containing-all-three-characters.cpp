
/*
//-> BRUTE FORCE SOL :- 
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length() ;
        int ctr = 0 ;
        
        for(int i=0 ; i<n ; i++){
            vector<int> hash(26 , 0) ;

            for(int j=i ; j<n ; j++){
                hash[s[j] - 'a']++ ; 

                if(hash[0] > 0 && hash[1] > 0 && hash[2] > 0){
                    ctr = ctr + (n-1) - j +1 ; 
                    break ;
                }
            }
        }

        return ctr ;
    }
}; 

*/

//OPTIMAL SOL :- SLIDING WINDOW :- 
class Solution {
public:
    int numberOfSubstrings(string s){
        int n = s.length() ;
        int ctr = 0 ; 
        
        int l = 0 ;
        int r = 0 ;

        vector<int> hash(26 ,0) ; 
        while( r < n){
            
            
            hash[s[r] - 'a']++ ; 

            while(hash[0] > 0 && hash[1] > 0 && hash[2] > 0){
                ctr = ctr + (n - r) ;
                hash[s[l] - 'a']-- ; 
                l++ ;
            }
            r++ ;
        }
        return ctr ;
    } 
};