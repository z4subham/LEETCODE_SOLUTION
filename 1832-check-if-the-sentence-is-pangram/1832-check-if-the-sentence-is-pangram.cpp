class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        int n = sentence.length() ; 

        //use the concept of mapping :- 
        map<char , int > mpp ; 

        for(int i=0 ; i<n ; i++){
            mpp[sentence[i]]++ ;
        } 

        if(mpp.size() == 26){
            return true ;
        }
        return false ;
    }
};