class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size() ;
        int ans = -1 ;

        unordered_map<int , int> mpp ;
        for(int i=0 ; i<= n-k ; i++){
            
            unordered_set<int> st ; 

            for(int j=i ; j<i+k ; j++){
                st.insert(nums[j]) ;
            } 

            for(auto it : st){
                mpp[it]++ ;
            }
        }

        for(auto it : mpp){
            if(it.second == 1){
                ans = max(ans , it.first) ;
            }
        }
        return ans ;
    }
};