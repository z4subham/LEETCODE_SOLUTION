class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans ;
        
        int n = num.size() - 1 ;
        int carry = 0 ;  

        for(int i= n ; i>= 0 ; i--){
            int last_dig = 0 ; 
            
            last_dig = k % 10 ;
            k = k / 10 ;
            
            int sum = last_dig + num[i] + carry ; 

            if(sum < 10) {
                carry = 0 ;
                ans.push_back(sum) ;
            } 
            else{

                sum = (sum % 10) ; 
                carry = 1 ;
                ans.push_back(sum) ;
            }
        }  

        // if k is greater than give arr :- 
        while( k != 0){
            int last_dig = 0 ; 
            
            last_dig = k % 10 ;
            k = k / 10 ;
            
            int sum = last_dig + carry ; 

            if(sum < 10) {
                carry = 0 ;
                ans.push_back(sum) ;
            } 
            else{
                sum = (sum % 10) ; 
                carry = 1 ;
                ans.push_back(sum) ;
            }
        } 

        if(carry == 1){
            ans.push_back(1) ;
        }

        reverse(ans.begin() , ans.end()) ;

        return ans ;
    }
};