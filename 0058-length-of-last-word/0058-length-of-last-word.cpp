class Solution {
public:
    int lengthOfLastWord(string s) {
        
        stack<string>st ;
        string word = "" ;
        int n = s.length() ;
        for(int i=0 ; i<n ; i++){
            if(s[i] != ' '){
                word = word + s[i] ;
            }
            else{
                if(word != ""){
                    st.push(word);
                    word = "" ;
                }
            }
        } 
        //push the last word :- 
        if(word != ""){
            st.push(word) ;
        }
        string ans = st.top() ;
        st.pop() ;
        return ans.size() ;
    }
};