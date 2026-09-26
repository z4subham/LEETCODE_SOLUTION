class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size() ;

        sort(nums.begin() , nums.end()) ; 

        long long prod_larg = 1 ; 
 

        // all three largeest : -
        for(int i=n-1 ; i>= n-3 ; i--){
            prod_larg = prod_larg * nums[i] ;
        } 

        //two smallest and one larg :- 
        long long prod_2larg_1small = 1 ;
        prod_2larg_1small = prod_2larg_1small * nums[0] * nums[1] * nums[n-1] ; 

        long long prod = max(prod_2larg_1small , prod_larg );
        return prod ;
    }
};