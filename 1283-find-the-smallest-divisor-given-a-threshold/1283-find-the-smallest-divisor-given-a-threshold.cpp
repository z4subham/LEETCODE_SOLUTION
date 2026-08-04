class Solution {
private:
    int find_max_ele(vector<int>& nums){
        int n = nums.size() ;

        int max_ele = INT_MIN ;
        for(int i=0 ; i<n ; i++){
            if(nums[i] > max_ele){
                max_ele = nums[i] ;
            }
        }
        return max_ele ;
    }  

//find the smallest divisor :- 
int find_smallest_divisor(vector<int>& nums, int threshold){
    
    int n = nums.size() ;
    int sum = 0 ;

    for(int i=0 ; i<n ; i++){
        sum = sum + ceil((double)nums[i] / threshold) ;
    }
    return sum ;
}
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size() ;
        int low = 1 ;
        int high = find_max_ele(nums) ;

        int ans = INT_MAX ;

        while(low <= high){
            long long mid = (low + high) / 2 ; 
            
            int sum = find_smallest_divisor(nums, mid) ;

            if(sum <= threshold){
                ans = mid ;
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        return ans ;
    }
};