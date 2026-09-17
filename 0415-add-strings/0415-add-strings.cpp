class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "" ; 

        int n = num1.length() ;
        int i = n-1 ;

        int m = num2.length() ;
        int j = m-1 ; 

        int carry = 0 ;

        while( i>= 0 || j >= 0){
            int n1 = 0 ;
            int n2 = 0 ;

            if(i>= 0){
                n1 = num1[i] - '0' ;
            }

            if(j>= 0){
                n2 = num2[j] - '0' ;
            } 

            int sum = n1 + n2 + carry ; 

            if(sum > 9){
                carry = 1 ;
            }
            else{
                carry = 0 ;
            } 

            ans = (char)((sum % 10) + '0') + ans ;

            i-- ;
            j-- ;
        }

        if(carry == 1){
            ans = '1' + ans ;
        }
        return ans ;
    }
};