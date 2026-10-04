class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length() ;
        
        int maxi = INT_MIN ;
        int ctr = 0 ;
        for(int i=0 ; i<k ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                ctr++ ;
            }
        }
        maxi = max(maxi , ctr) ; 

        int l = 0 ;
        int r = k-1 ;

        while( r < n-1){
            if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u'){
                ctr-- ;
            } 
            l++ ;
            r++ ;

            if(s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u'){
                ctr++ ;
            } 

            maxi = max(maxi , ctr) ;
        }
        return maxi ;
    }
};