class Solution {
private:
    int find_max_ele(vector<int>& piles){
        int n = piles.size() ;

        int max_ele = INT_MIN ;
        for(int i=0 ; i<n ; i++){
            if(piles[i] > max_ele){
                max_ele = piles[i] ;
            }
        }
        return max_ele ;
    }  

    long long count_total_hours(vector<int>&piles , int mid ){
        long long total_hours = 0 ;
        int n = piles.size() ;

        for(int i=0 ; i<n ; i++){
            total_hours = total_hours + ceil((double)piles[i] / mid) ;
        }
        return total_hours ;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size() ;

        int low = 1 ;
        int high = find_max_ele(piles) ;
        int ans = INT_MAX ; 

        while(low <= high){
            long long mid = low + (high - low) / 2 ;
            long long total_hours = count_total_hours(piles , mid );

            if(total_hours <= h){
                ans = mid ; 
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        return ans ;
    }
};