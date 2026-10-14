
//BRUTE FORCE CODE WRITTEN BY ME :- 
/*
class Solution {
public:
    string maxSumOfSquares(int num, int sum) { 
         
        //finding the range from which it starts searching :-  
        long long start = 1 ;
        for(int i=1 ; i<num ; i++){
            start = start * 10 ;
        } 

        long long end = start * 10 - 1 ; 
        
        long long ans = -1 ;
        long long maxi = -1 ;

        for(long long i = start ; i<= end ; i++){
            long long temp = i ;
            long digit_sum = 0 ;
            long long score = 0 ;

            while( temp > 0){
                int last_dig = temp % 10 ;
                digit_sum = digit_sum + last_dig ; 
                score = score + ( 1LL * last_dig * last_dig) ; 

                temp = temp / 10 ;
            } 

            if(digit_sum == sum){
                if(score >= maxi){
                    maxi = score ;
                    ans = i ; 
                }
            }
        } 
        if(ans == -1){
            return "" ;
        }
        return to_string(ans) ;
    }
};
*/ 



class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) {
            return "";
        }

        string ans = "";

        while (sum >= 9) {
            ans += '9';
            sum -= 9;
            num--;
        }

        if (sum > 0) {
            ans += char('0' + sum);
            num--;
        }

        while (num > 0) {
            ans += '0';
            num--;
        }

        return ans;
    }
};
