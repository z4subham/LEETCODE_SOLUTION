class Solution {
private : 
    bool isalpha(char ch){ 
        for(char ch_ = 'a' ; ch_ <= 'z' ; ch_++ ){
            if(ch == ch_){
                return true ;
            }
        } 

        for(char ch_ = 'A' ; ch_ <= 'Z' ; ch_++ ){
            if(ch == ch_){
                return true ;
            }
        }
        return false ;
    }    
public:
    string reverseOnlyLetters(string s) {
        
        int i = 0 ;
        int j = s.length() - 1 ;

        while( i < j ){ 
            char ch1 = s[i] ;
            char ch2 = s[j] ;

            if(isalpha(ch1) && isalpha(ch2)){
                swap(s[i] , s[j]) ;
                i++ ;
                j-- ;
            }
            else if( ! isalpha(ch1) && isalpha(ch2)){
                i++ ;
            }
            else if( isalpha(ch1) && ! isalpha(ch2) ){
                j-- ;
            }
            else{
                i++ ;
                j-- ;
            }
        }
        return s ;
    }
};