class Solution {
public:
    int countEven(int num) {
        int ctr = 0 ;

        for(int i=1 ; i<= num ; i++){
            int temp = i ;
            int sum = 0 ;

            while(temp != 0){
                int last_dig = temp % 10 ;
                temp = temp / 10 ;
                sum = sum + last_dig ;
            } 
            if(sum % 2 == 0){
                ctr++ ;
            }
        }
        return ctr ;
    }
};