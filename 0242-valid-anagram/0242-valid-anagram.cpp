class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash_s(26 , 0) ;

        //pre-computation :- 
        for(int i=0 ; i < s.length() ; i++){
            hash_s[s[i] - 'a']++ ;
        }

        vector<int> hash_t(26 , 0) ;

        for(int i=0 ; i < t.length() ; i++){
            hash_t[t[i] - 'a']++ ;
        } 
 
        for(int i=0 ; i<26 ; i++){
            if(hash_s[i] != hash_t[i]){
                return false ;
            }
        }
        return true ;
    }
};