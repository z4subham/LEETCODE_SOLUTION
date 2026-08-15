class Solution {
public:
    int strStr(string haystack, string needle) {
        int  n = haystack.length() ;
        int m = needle.length() ;
        
        int maxi = -1 ; //->it sotre the index value 
        for(int i=0 ; i<= n-m ; i++){
            int j=0 ;
            while(j<m){
                if(haystack[i+j] != needle[j]){
                    break ;
                }
                j++ ;
            }
            if(j == m){
                maxi = i ;
                return maxi ;
            }
        }
        return maxi ;
    }
};