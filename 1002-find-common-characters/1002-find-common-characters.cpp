class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans ;
        int n = words.size() ;

        vector<int> common(26 , INT_MAX) ; 
 

        //use the concept of hashing :- 
        for(int i=0 ; i<n ; i++){
            vector<int>freq(26 , 0) ;
            for(int j=0 ; j < words[i].size() ; j++){
                char ch = words[i][j] ;
                freq[ch - 'a']++ ;
            }
            for(int i=0 ; i<26 ; i++){
                common[i] = min(freq[i] , common[i]) ;
            }
        }

    

        for(int i=0 ; i< common.size(); i++){
            while(common[i] > 0){
                ans.push_back(string(1 , 'a' + i)) ;
                common[i]-- ;
            }
        }
        return ans ;
    }
};