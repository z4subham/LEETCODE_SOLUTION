class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.length() ; 
        int m = magazine.length() ;

        unordered_map<char , int > mpp ;

        //pre-compute :- 
        for(int i=0 ; i<m ; i++){
            mpp[magazine[i]]++ ;
        }

        for(int i=0 ; i < n ; i++){
            mpp[ransomNote[i]]-- ;
        }

        for(auto it : mpp){
            if(it.second < 0){
                return false ;
            }
        }
        return true ;
    }
};