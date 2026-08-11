class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size() ;

        unordered_map<int , int> freq ;
        unordered_map<int , int> first;
        unordered_map<int , int> last ;

        for(int i=0 ; i<n ; i++){
            freq[nums[i]]++ ; 

            if(first.find(nums[i]) == first.end()){
                first[nums[i]] = i ; 
            }
            last[nums[i]] = i ;
        }

        int degree = 0 ;
        for(auto it : freq){
            degree = max(degree , it.second) ;
        }

        int ans = n ;

        for(auto it : freq){
            int element = it.first ;

            if(it.second == degree){
                int length = last[element] - first[element] + 1 ; 

                ans = min(ans , length) ;
            }
        }
        return ans ;
    }
};