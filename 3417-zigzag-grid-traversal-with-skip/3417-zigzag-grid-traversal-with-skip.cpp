class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans ;
        
        int n = grid.size() ;  //->rows 
        int m = grid[0].size() ; //->columns 

        bool left_to_right = true ;
        bool take = true ;

        for(int i=0 ; i<n ; i++){
            if(left_to_right == true){
                for(int j=0 ; j<m ; j++){
                    if(take == true){
                        ans.push_back(grid[i][j]) ;
                    }
                    take = !take ;
                }
            }
            else{
                for(int j=m-1 ; j>=0 ; j--){
                    if(take == true){
                        ans.push_back(grid[i][j]) ;
                    }
                    take = !take ; 
                }
            }
            left_to_right = !left_to_right ;
        }
        return ans ;
    }
};