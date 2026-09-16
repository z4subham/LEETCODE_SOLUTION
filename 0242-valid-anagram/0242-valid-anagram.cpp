class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false ;
        } 
        
        vector<int> hash_1(26,0) ;
        for(int i=0 ; i<s.length() ; i++){
            hash_1[s[i] - 'a']++ ;
        }

        vector<int> hash_2(26 , 0) ;
        for(int i=0 ; i< t.length() ; i++){
            hash_2[t[i] - 'a']++ ;
        } 

        //iterate in hash arr :- 
        for(int i=0 ; i<hash_1.size() ; i++){
            if(hash_1[i] != hash_2[i]){
                    return false ;
            }
        }
        return true ;
    }
};