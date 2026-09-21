class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size() ;
        int ctr = 0 ;
        int j = n-1 ;
        for(int i=0 ; i<n ; i++){
            if(nums[i] == 0){
                while(j>i && nums[j] == 0){
                    j-- ;
                }
                if(j>i){
                    ctr++ ; 
                    j-- ;
                }
            }
        }
        return ctr ;
    }
};