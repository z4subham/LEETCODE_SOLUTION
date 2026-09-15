class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans ;
        int n = s.length() ;

        string word = "" ;
        for(int i=0 ; i<n ; i++){
            if(s[i] != ' '){ // empty character :-
                word = word + s[i] ;
            }
            else{
                if(word != ""){
                    int left = 0 ;
                    int right = word.length() -1 ; 
                    
                    while( left < right){
                        swap(word[left] , word[right]) ;
                        left++ ;
                        right-- ;
                    }
                } 
                ans.push_back(word) ; 
                word = "" ;
            }
        } 

        // if the last word is left :- 
        if(word != ""){
            int left = 0 ;
            int right = word.length() -1 ; 
                    
            while( left < right){
                swap(word[left] , word[right]) ;
                left++ ;
                right-- ;
            }
        }
        ans.push_back(word) ;
        
        string final_ans = "" ;

        for(int i=0 ; i<ans.size() ; i++){
            final_ans = final_ans + ans[i] ;

            if( i  != ans.size()-1){
                final_ans = final_ans + " " ;
            }
        }
        return final_ans ;
    }
};