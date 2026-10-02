/*
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size() ;
        int maxi = 0 ;

        for(int i=0 ; i<n ; i++){
            int ctr = 0 ;
            for(int j=i ; j<n  ; j++){
                if( nums[j] == 0){
                    ctr++ ;
                    if(ctr > k){
                        break ;
                    }
                    else{
                        maxi = max(j-i+1 , maxi) ;
                    }
                }
                else{
                    maxi = max(maxi , j-i+1) ;
                }
            }
        }
        return maxi ;
    }
};
*/ 

class Solution {
public:
    int longestOnes(vector<int>& nums, int k){
        int n = nums.size() ;
        int ctr = 0 ;
        int maxi = 0 ;
        int l = 0 ; // left 
        int r = 0 ; // right

        while( r <n){
            if(nums[r] == 0){
                ctr++ ;
            } 

            while( ctr > k){
                if(nums[l] == 0){
                    ctr-- ;
                } 
                l++ ;
            } 

            maxi = max( maxi , r-l+1) ;
            r++ ;
        }

        return maxi ;
    }
};    