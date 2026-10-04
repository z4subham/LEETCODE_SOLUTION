/*
//BRUTE FORCE LOGIC : -
class Solution {
public:
    long long countVowels(string word) {
        long long ctr = 0 ;
        
        int n = word.size() ;

        for(int i=0 ; i<n ; i++){

            string ans = "" ;
            for(int j=i ; j<n ; j++){
                ans = ans + word[j] ; 

                for(int k=0 ; k < ans.length() ; k++){
                    if(ans[k] == 'a' || ans[k] == 'e' || ans[k] == 'i' || ans[k] == 'o' || ans[k] == 'u'){
                        ctr++ ;
                    }
                }
            }
        }

        return ctr ;
    }
};

*/ 

class Solution {
public:
    long long countVowels(string word){
        long long ctr = 0 ;
        
        int n = word.size() ;
        int l = 0 ;
        int r = 0 ;

        while( r < n){
            if(word[r] == 'a' || word[r] == 'e' || word[r] == 'i' || word[r] == 'o' || word[r] == 'u'){ 
                l = r ;
                ctr = ctr + (l + 1ll) * (n-r);
            }
            r++ ;
        }

        return ctr ;
    }
};    