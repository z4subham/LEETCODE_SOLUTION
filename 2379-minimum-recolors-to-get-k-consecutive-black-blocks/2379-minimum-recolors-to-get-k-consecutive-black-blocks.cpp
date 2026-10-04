class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int maxi = INT_MAX ;
        int n = blocks.size() ;
        int ctr = 0 ;

        for(int i=0 ; i<k ; i++){
            if(blocks[i] == 'W'){
                ctr++ ; 
            }
        }
        maxi = min(maxi , ctr) ;
        
        int l = 0 ;
        int r = k-1 ; 

        while( r < n-1){
            if(blocks[l] == 'W'){
                ctr-- ;
            } 
            l++ ;
            r++ ;
            if(blocks[r] == 'W'){
                ctr++ ;
            }
            maxi = min(maxi , ctr) ; 
        }
        return maxi ;
    }
};