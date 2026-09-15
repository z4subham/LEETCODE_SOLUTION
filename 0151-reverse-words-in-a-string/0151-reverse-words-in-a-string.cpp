class Solution {
public:
    string reverseWords(string s) {
        stack<string> st ;
        vector<string> ans ;

        string words = "" ; 

        for(int i=0 ; i< s.length() ; i++){
            if(s[i] != ' '){
                words = words + s[i] ;
            }
            else{
                if(words != ""){
                    st.push(words) ; 
                    words = "" ;
                }
            }
        } 
        //puhs the last word :- 
        if(words != ""){
            st.push(words);
        } 

        //pop all the words from stack and put it into vector ;- 
        while(!st.empty()){
            
            ans.push_back(st.top()) ;
            st.pop() ;
        }

        //final string is stired in it ;- 
        string final_ans = "" ;
        
        for(int i=0 ; i<ans.size() ; i++){
            final_ans = final_ans + ans[i] ; 
             
            if(i != ans.size() - 1){
                final_ans = final_ans + " " ;
            }
        }
        return final_ans ;
    }
};