class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int missing_no ;

        vector<int> hash(n+1 , 0);
        for(int i=0 ; i<n ; i++){
            hash[nums[i]]++ ;
        }
        
        //fetching :-
        for(int i=0 ; i<n+1 ; i++){
            if(hash[i] == 0){
                missing_no = i ; 
            }
        }
        return missing_no ;
    }
};