class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans ;
        
        unordered_map<int , int > mpp ;
        for(int i=0 ; i<n ; i++){
            mpp[nums[i]]++ ;
        }
        
        //iterate in map :- 

        int repeating = -1 ;
        int missing = -1 ;
        for(int i=1 ; i<= n ; i++){
            if(mpp[i] == 2){
                repeating = i ;
            }
            if(mpp[i] == 0){
                missing = i ;
            }
        }
        return {repeating , missing} ;
    }
};