class Solution {
public:
    bool isAnagram(string s, string t) {

        if( s.length() != t.length()){
            return false ;
        }
        unordered_map<char ,int > mpp ;

        //map of string s is created :- 
        for(int i=0 ; i<s.length() ; i++){
            mpp[s[i]]++ ;
        } 

        //iterate in map :- 
        for(int i=0 ; i<t.length() ; i++){
            mpp[t[i]]-- ;
        }

        for(auto it : mpp){
            if(it.second != 0){
                return false ;
            }
        }
        return true ;
    }
};