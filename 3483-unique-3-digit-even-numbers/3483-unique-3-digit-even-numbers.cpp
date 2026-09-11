class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size() ;

        set<int> st ;
        int i=0 ;
        while(i<n){
            int j=0 ; 
            while(j<n){
                if(i == j){
                    j++ ;
                    continue ;
                }
                int k=0 ;
                while(k<n){
                    if(k==i || k==j){
                        k++ ;
                        continue ;
                    } 

                    if( digits[i] != 0 && digits[k] % 2 == 0){
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k] ;

                        st.insert(num) ; 
                    }
                    k++ ;
                }
                j++ ;
            }
            i++ ;
        }
        int size = st.size() ;
        return size ;
    }
};