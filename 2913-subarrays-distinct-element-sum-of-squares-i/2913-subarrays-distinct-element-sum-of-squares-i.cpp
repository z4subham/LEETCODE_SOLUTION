class Solution { 
private: 
    int find_maxm_ele(vector<int>& nums){
        int n = nums.size() ;
        int max_ele = INT_MIN ;

        for(int i=0 ; i<n ; i++){
            if(nums[i] > max_ele){
                max_ele = nums[i] ;
            }
        }
        return max_ele ;
    }    
public:
    int sumCounts(vector<int>& nums) { 
        int n = nums.size() ;
        int max_ele = find_maxm_ele(nums) ;
        int ans = 0 ;
        
        for(int i=0 ; i<n ; i++){
            vector<int> hash(max_ele + 1 , 0) ;
            
            for(int j=i ; j<n  ; j++){
                hash[nums[j]]++ ; 
                int ctr = 0 ; 

                for(int k=0 ; k < hash.size() ; k++){ 
                    
                    if(hash[k] >= 1){
                        ctr++ ; 
                    } 
                }
                ans = ans + (ctr * ctr) ;
            }
        }

        return ans ;
    }
};