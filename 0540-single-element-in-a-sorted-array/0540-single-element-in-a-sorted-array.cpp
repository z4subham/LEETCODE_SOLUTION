class Solution {
private : 
    int find_maxm_ele(vector<int>& nums){
        int n = nums.size() ; 

        int maxm_ele = INT_MIN ;

        for(int i=0 ; i<n ; i++){
            if( nums[i] > maxm_ele){
                maxm_ele = nums[i] ;
            }
        }
        return maxm_ele ;
    }    
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        
        int singleNo = -1 ;
        int maxm_ele = find_maxm_ele(nums) ;
        vector<int> hash(maxm_ele + 1 , 0) ; 

        for(int i=0 ; i<n ; i++){
            hash[nums[i]]++ ;
        } 

        for(int i=0 ; i < hash.size() ; i++){
            if(hash[i] == 1){
                singleNo = i ; 
            }
        }
        return singleNo ;
    }
};