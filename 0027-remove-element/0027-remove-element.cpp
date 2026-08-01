class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size() ;

        for(int i=n-1 ; i>= 0 ; i--){
            for(int j =i-1 ; j>=0 ; j--){
                if(nums[j] == val && nums[i] != val){
                    swap(nums[i] , nums[j]) ;
                    break ;
                }
                else if(nums[j] == val && nums[i] == val){
                    continue ;
                }
            }
        }

        int ctr = 0 ;
        for(int i=0 ; i<n ; i++){
            if(nums[i] != val){
                ctr++ ;
            }
        } 
        return ctr ;
    }
};