/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private :
    int find_max_path_sum(TreeNode* root , int &maxi){
        if(root == NULL){
            return 0 ;
        }

        int left_sum = find_max_path_sum(root->left , maxi) ;
        int right_sum = find_max_path_sum(root->right , maxi) ;
 
        left_sum = max(0 , left_sum ) ;
        right_sum = max(0 , right_sum) ;
        
        maxi = max(maxi , left_sum + right_sum + root->val) ;

        return root->val + max(left_sum , right_sum);
    }    
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN ;

        int ans = find_max_path_sum( root , maxi);

        return maxi ;
    }
};