class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size() ;
        vector<int> ans ;
        
        set<int> st ;
        int i=0 ;
        while(i<n){ 
            int j=0 ;
            while(j<n){
                if(j == i){
                    j++ ;
                    continue ;
                }
                int k=0 ;
                while(k<n){
                    if(k == i || k == j){
                        k++ ;
                        continue ;
                    }
                    if(digits[i] != 0 && digits[k] % 2 == 0){
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k] ; 

                        st.insert(num);
                    }
                    k++ ;
                }
                j++ ;
            }
            i++ ;
        }

        //put all the ele of set into vector :- 
        for(auto it = st.begin() ; it != st.end() ; it++){
            ans.push_back(*(it)) ;
        }
        return ans ;
    }
};