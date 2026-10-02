class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size() ;
        int sum = 0 ;
        int maxi = 0 ;
        int l = 0 ;
        int r = k-1 ;

        for(int i=l ; i<=r ; i++){
            sum = sum + cardPoints[i] ;
            maxi = max(maxi , sum) ;
        } 
        
        int last = n-1 ;
        while( r >= 0){
            sum = sum - cardPoints[r] ;
            r-- ;
            
            sum = sum + cardPoints[last] ;
            last-- ;

            maxi = max(maxi , sum ) ;
        }
        return maxi ;
    }
};