class Solution {
private : 
// lower bound :- 
    int lower_bound(vector<int>& nums, int target , int n){
        int low = 0 ;
        int high = n-1 ;

        int ans = n ;
        
        while( low <= high){
            int mid = (low + high) / 2 ;

            if( nums[mid] >= target){
                ans = mid ;
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }

        return ans ;
    }
//upper bound :- 
    int upper_bound(vector<int>& nums, int target , int n){
        int low = 0 ;
        int high = n-1 ;

        int ans = n ;
        
        while( low <= high){
            int mid = (low + high) / 2 ;

            if( nums[mid] > target){
                ans = mid ;
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }

        return ans ;
    }    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size() ;
        
        if(n == 0){
            return {-1,-1} ;
        }

        vector<int> result ;
        
        int x = upper_bound( nums, target , n) - 1 ;
        int y = lower_bound( nums, target , n) ;

        if( y== n || nums[y] != target){
            return {-1,-1};
        }
        result.push_back(y) ;
        result.push_back(x) ;

        return result ;
    }
};