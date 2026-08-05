class Solution {
private : 
    int find_maxm_ele(vector<int>& arr){
        int n = arr.size() ;
        int max_ele = INT_MIN ; 

        for(int i=0 ; i<n ; i++){
            if(arr[i] > max_ele){
                max_ele = arr[i] ; 
            }
        }
        return max_ele ;
    }    
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size() ;
        int max_ele = find_maxm_ele(arr) ;
        int ctr  = 0 ;
        for(int i=1 ; i<= find_maxm_ele(arr) ; i++ ){
            bool found = false ;
            for(int j=0 ; j<n ; j++){
                if( i == arr[j]){
                    found = true ;
                    break ;
                }
            }

            if(found == false){
                ctr++ ;

                if(ctr == k){
                    return i ;
                }
            }
        }

        int num = max_ele + 1 ;

        while( true ){
            ctr++ ;
            if(ctr == k){
                return num ; 
            }
            num++ ;
        }
    }
};