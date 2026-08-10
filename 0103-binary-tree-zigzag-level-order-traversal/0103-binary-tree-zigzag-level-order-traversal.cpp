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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans ;
        
        if(root == NULL){
            return ans ;
        }

        queue<TreeNode*> q ;
        q.push(root) ;
        int left_to_right = true ;

        while(!q.empty()){
            int size = q.size() ;
            vector<int> level(size) ;

            for(int i=0 ; i<size ; i++){
                TreeNode* root = q.front() ;
                q.pop() ; 

                int index ;
                if(left_to_right == true){
                    index = i ; 
                }
                else{
                    index = size - 1 - i ;
                }
                level[index] = root->val ; 

                if(root->left != NULL){
                    q.push(root->left);
                }
                if(root->right != NULL){
                    q.push(root->right);
                }
            }
            ans.push_back(level) ;
            left_to_right = ! left_to_right ;
        }
        return ans ;
    }
};