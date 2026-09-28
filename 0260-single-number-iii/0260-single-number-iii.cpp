class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans ;

        int n = nums.size() ;
        unordered_map<int , int > mpp ;

        for(int i= 0 ; i<n; i++){
            mpp[nums[i]]++ ;
        }

        for(auto it = mpp.begin() ; it != mpp.end() ; it++){
            if(it->second == 1){
                ans.push_back(it->first) ;
            }
        }
        return ans ;
    }
};