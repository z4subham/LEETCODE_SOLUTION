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
    bool checkMirror(TreeNode* left , TreeNode* right){
        if(left == NULL && right == NULL){
            return true ;
        }
        if(left == NULL || right == NULL){
            return false ;
        }
        if(left->val != right->val ){
            return false ;
        }

        bool inside = checkMirror(left->left  ,right->right) ;
        bool outside = checkMirror(left->right , right->left) ; 

        if(inside && outside){
            return true ;
        }
        return false ;
    }    
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true ;
        }
        return checkMirror(root->left , root->right) ;
    }
};