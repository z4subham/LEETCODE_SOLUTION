/*
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size() ;

        for(int i=0 ; i<n  ;i++){
            for(int j=0 ; j<n  ;j++){
                if(i != j){
                    if(nums[i] == nums[j] && abs(j-i) <= k){
                        return true ;
                    }
                }
            }
        }
        return false ;
    }
};

*/ 

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        int n = nums.size() ;
        int l = 0 ;
        int r = 0 ;
        unordered_set<int> st ; 

        while( r < n){
            if(st.find(nums[r]) != st.end()){
                return true ;
            }
            st.insert(nums[r]) ;
            
            if( r - l >= k){
                st.erase(nums[l]) ;
                l++ ;
            }
            r++ ;
        }
        return false ;
    } 
};    