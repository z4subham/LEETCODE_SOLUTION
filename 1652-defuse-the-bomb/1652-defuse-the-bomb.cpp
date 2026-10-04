class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        
        vector<int> ans(n ,0) ;
        
        if(k==0){
            return ans ;
        } 
        int sum = 0 ;

        if( k > 0){
            //calculate the window size : -
            for(int i=1 ; i<= k ; i++){
                sum = sum + code[i % n] ;
            } 

            for(int i=0 ; i<n ; i++){
                ans[i] = sum ; 
                sum = sum - code[(i+1) % n] ;
                sum = sum + code[(i+1+k) % n] ;
            }
        }
        else { 
            k = abs(k) ; 
            
            for(int i= n - k ; i< n ; i++){
                sum = sum + code[i] ;
            } 

            for(int i=0 ; i<n ; i++){
                ans[i] = sum ;  
                sum = sum - code[(i-k+n) % n ] ;
                sum = sum + code[i] ;
            }
        }
        return ans ;
    }
};

