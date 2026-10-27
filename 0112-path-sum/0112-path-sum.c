/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum) {
    if(root==NULL){
        return false;
    }
    if((root->left==NULL &&root->right==NULL) && targetSum==root->val){
        return true; 
    }
    bool right=hasPathSum(root->right,targetSum-(root->val));
    bool left=hasPathSum(root->left,targetSum-(root->val));
    return right||left;
}