class Solution {
public:
    int smallestNumber(int n, int t) {
        int num = n ;
        
        while(true){
            int temp = num ;
            int prod = 1 ;

            while(temp != 0){
                int last_dig = temp % 10 ;
                prod = prod * last_dig ;
                temp = temp / 10 ;
            }

            if(num == 0){
                return num ;
            }
            if(prod % t == 0){
                return num ;
            }
            num++ ;
        }
    }
};