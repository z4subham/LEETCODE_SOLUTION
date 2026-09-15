class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length() ;

        int i = 0 ; 

        while(i<n){
            int j = i ;
            int d = min( i+k-1 , n-1 ) ;

            while( j < d){
                swap(s[j] , s[d]) ;
                j++ ;
                d-- ;
            }
            i = i + 2 * k ;
        }
        string newString = s ;
        return newString ;
    }
};