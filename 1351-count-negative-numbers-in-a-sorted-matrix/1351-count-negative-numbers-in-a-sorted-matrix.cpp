// BRUTE FORCE SOL :-

/*
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size() ;
        int m = grid[0].size() ;
        
        int ctr = 0 ;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(grid[i][j] < 0){
                    ctr++ ;
                }
            }
        }
        return ctr ;
    }
};

*/

//BETTER SOL :-  


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();

        for(int i = 0; i < n; i++){
            reverse(grid[i].begin(), grid[i].end());
        }

        int ans = 0;

        for(int i = 0; i < n; i++){
            int low = 0;
            int high = m - 1;

            while(low <= high){
                int mid = (low + high) / 2;

                if(grid[i][mid] < 0){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }

            ans = ans + low;
        }

        return ans;
    }
};