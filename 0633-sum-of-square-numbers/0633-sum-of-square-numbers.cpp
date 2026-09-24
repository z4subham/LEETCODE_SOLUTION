class Solution {
public:
    bool isSquare(long long num) {

        long long low = 0;
        long long high = num;

        while(low <= high) {

            long long mid = low + (high - low) / 2;

            if(mid * mid == num) {
                return true;
            }
            else if(mid * mid > num) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return false;
    }

    bool judgeSquareSum(int c) {

        for(long long i = 0; i * i <= c; i++) {

            long long remaining = c - i * i;

            if(isSquare(remaining)) {
                return true;
            }
        }

        return false;
    }
};