class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int maxi = INT_MIN ;
        
        //find maximum :- 
        // for(int i=0 ; i < nums.size() ; i++){
        //     if(nums[i] > maxi){
        //         maxi = nums[i] ;
        //     }
        // }

        unordered_map<int , int > mpp ;
        for(int i=0 ; i<nums.size() ; i++){
            mpp[nums[i]]++ ;
        } 

        //iterate in map :- 
        for(auto it : mpp){
            if(it.second > 1){
                return true ;
            }
        }
        return false ;
    }
};