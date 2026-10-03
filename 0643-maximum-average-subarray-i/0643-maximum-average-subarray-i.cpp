class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0 ;
        double maxi = 0 ;
        double sum = 0 ;
        int n = nums.size() ;

        for(int i=0 ; i<k ; i++){
            sum = sum + nums[i] ;
        }
        avg = sum / k ;
        maxi = avg ; 


        int l = 0 ;
        int r = k-1 ;

        while( r < n-1){
            sum = sum - nums[l] ;
            l++ ;

            r++ ;
            sum = sum + nums[r] ; 

            avg = sum / k ;
            maxi = max(maxi , avg) ;
        }
        return maxi ;
    }
};