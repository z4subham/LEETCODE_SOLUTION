//BRUTE FORCE SOL WRITTEN BY ME :- 

/*
class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        long long ctr = 0 ;
         
        int n = nums.size() ; 

        for(int i=0 ; i<n ; i++){
            int freq  = 0 ;
            for(int j=i ; j<n ; j++){
                if(nums[j] == target){
                    freq++ ;
                } 

                if(freq > (j-i+1)/2){
                    ctr++ ;
                }
            }
        }

        return ctr ;
    }
}; 
*/ 



class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        vector<int> freq(2 * n + 3, 0);

        int sum = n + 1;
        int smaller = 0;
        long long ans = 0;

        freq[sum] = 1;

        for (int x : nums) {
            if (x == target) {
                smaller += freq[sum];
                sum++;
            } 
            else {
                sum--;
                smaller -= freq[sum];
            }

            ans += smaller;
            freq[sum]++;
        }

        return ans;
    }
};