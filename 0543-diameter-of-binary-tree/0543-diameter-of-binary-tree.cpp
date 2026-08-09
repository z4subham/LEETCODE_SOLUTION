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
    int find_height(TreeNode* root){
        if(root == NULL){
            return 0 ;
        }

        int lh = find_height(root->left) ;
        int rh = find_height(root->right) ;

        return 1 + max(lh , rh) ;
    }    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0 ;
        }

        int lh = find_height(root->left) ;
        int rh = find_height(root->right) ;

        int curr_dia = lh + rh ;

        int left_ht = diameterOfBinaryTree(root->left) ;
        int right_ht = diameterOfBinaryTree(root->right) ;

        return max(curr_dia , max(left_ht , right_ht)) ;
    }
};