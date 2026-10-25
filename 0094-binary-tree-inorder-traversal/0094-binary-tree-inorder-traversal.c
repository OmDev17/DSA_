/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int count(struct TreeNode* root){
    if(root==NULL){
        return 0;
    }
    return count(root->left)+count(root->right)+1;
 }
 void inorder(struct TreeNode* root,int *arr,int* i){
    if(root==NULL){
        return;
    }
    else{
        inorder(root->left,arr,i);
        arr[(*i)++]=root->val;
        inorder(root->right,arr,i);
    }
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    if(root==NULL){
        *returnSize=0;
        return NULL;
    }
    int n=count(root);
    int *arr=malloc (n*sizeof(int));
    *returnSize=n;
    int i=0;
    inorder(root,arr,&i);
    return arr;
}
