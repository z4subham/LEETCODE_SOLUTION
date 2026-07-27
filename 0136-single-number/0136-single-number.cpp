class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size() ;

        unordered_map<int , int > mpp ;

        //iterate over the loop and put into the map :- 
        for(int i=0 ; i<n ; i++){
            mpp[nums[i]]++ ;
        }


        //->iterate in map
        for(auto it : mpp){
            if(it.second == 1){
                return it.first ;
            }
        }

        return -1;
    }
};