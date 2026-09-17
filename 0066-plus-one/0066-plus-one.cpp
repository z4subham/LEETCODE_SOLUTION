class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans ;
        
        int n = digits.size() - 1;
        int carry = 0 ; 

        for(int i=n ; i>= 0 ; i--){
            if( i == n){
                int sum = carry + digits[i] + 1 ;
                if(sum < 10){
                    carry = 0 ;
                    ans.push_back(sum) ;
                }
                else{
                    carry = 1 ;
                    sum = sum % 10 ;
                    ans.push_back(sum) ;
                }
            }
            else if( i < n){
                int sum = carry + digits[i] ; 
                if(sum < 10){
                    carry = 0 ;
                    ans.push_back(sum) ;
                }
                else{
                    carry = 1 ;
                    sum = sum % 10 ;
                    ans.push_back(sum) ;
                }
            }
        }
        if(carry == 1){
            ans.push_back(1) ;
        }
        reverse(ans.begin() , ans.end()) ;
        return ans ;
    }
};