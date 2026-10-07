class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans ;
        
        int n = nums.size() ; 

        sort(nums.begin() , nums.end()) ;
        
        int min_ele = nums[0] ;
        int max_ele = nums[n-1] ;

        vector<int> hash(max_ele + 1 , 0) ;
        
        for(int i=0 ; i<n ; i++){
            hash[nums[i]]++ ;
        } 

        for(int i= min_ele ; i<= max_ele ; i++){
            if(hash[i] == 0){
                ans.push_back(i) ;
            }
        }

        return ans ;
    }
};