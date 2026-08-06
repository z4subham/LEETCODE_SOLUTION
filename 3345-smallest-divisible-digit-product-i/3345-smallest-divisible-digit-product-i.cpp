class Solution {
public:
    int smallestNumber(int n, int t) {
        int num = n ;

        while(true){
            int temp = num ;
            int product = 1 ;

            while(temp > 0){
                product = product * (temp % 10) ;
                temp /= 10 ;
            }


            if(num == 0){
                product = 0 ;
            } 

            if(product % t == 0){
                return num ;
            }
            num++ ;
        }
    }
};