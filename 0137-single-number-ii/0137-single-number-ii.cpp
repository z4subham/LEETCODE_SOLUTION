class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size() ;
        map<int , int > mpp ;
        

        for(int i=0 ; i<n ; i++){
            mpp[nums[i]]++ ;
        }

        //iterate in map :- 
        for(auto it = mpp.begin() ; it != mpp.end() ; it++){
            if(it->second == 1){
                return it->first ;
            }
        }
        return -1 ;
    }
};