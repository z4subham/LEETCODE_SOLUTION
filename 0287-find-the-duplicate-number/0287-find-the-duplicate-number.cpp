class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        
        int duplicate = -1 ;
        unordered_map<int , int > mpp ;

        for(int i=0 ; i<n ; i++){
            mpp[nums[i]]++ ;
        }

        for(auto it : mpp){
            if(it.second >=2){
                duplicate = it.first ;
            }
        }
        return duplicate ;
    }
};