class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length() ;
        
        //vector for storing all the string which contains of size = k
        vector<string> st ;

        for(int i=0 ; i< n ; i++){
            for(int j=i ; j<n ; j++){
                string temp = s.substr(i , j-i+1) ;

                int ctr = 0 ;
                for(int m=0 ; m < temp.length() ; m++){
                    if(temp[m] == '1'){
                        ctr++ ;
                    }
                }

                if(ctr == k){
                    st.push_back(temp);
                }
            }
        }

        if(st.empty()){
            return "" ;
        }

        int min_len = INT_MAX ;

        for(int i=0 ; i < st.size() ; i++){
            min_len = min(min_len , (int)st[i].length()) ;
        }
        

        //for finding the smallest string :- 
        string ans = "" ;
        for(int i=0 ; i < st.size() ; i++){
            if(st[i].length() == min_len){

                if( ans == "" || st[i] < ans){
                    ans = st[i] ; 
                }
            }
        }
        return ans ;
    }
};