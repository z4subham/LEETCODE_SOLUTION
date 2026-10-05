class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size() ;

        
        int ctr = 0 ;
        sort(nums.begin() , nums.end()) ;

        for(int i=1 ; i < n-1 ;i++){
            if(nums[i] > nums[0] && nums[i] < nums[n-1]){
                ctr++ ;
            }
        }
        return ctr ;
    }
};