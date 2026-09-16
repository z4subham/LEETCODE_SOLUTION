class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "" ;

        string words = strs[0] ;
        for(int i=0 ; i< words.length() ; i++){
            for(int j=1 ; j< strs.size() ; j++){
                if(strs[j][i] != words[i] || i >= strs[j].length()){
                    return ans ;
                }
            }
            ans  = ans  + words[i] ;
        }
        return ans ;
    }
};