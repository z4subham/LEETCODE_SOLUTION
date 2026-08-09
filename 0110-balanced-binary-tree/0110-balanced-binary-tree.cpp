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
    int height(TreeNode* root){
        if(root == NULL){
            return 0 ;
        }
        int lh = height(root->left) ;
        int rh = height(root->right) ;

        return 1 + max(lh , rh) ;
    }    
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true ;
        }

        int left_height = height(root->left) ;
        int right_height = height(root->right) ;

        if(abs(right_height - left_height) > 1){
            return false ;
        }

        bool left = isBalanced(root->left) ;
        bool right = isBalanced(root->right) ;

        if(!left || !right){
            return false ;
        }
        return true ;
    }
};