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

/*
Traverse the Tree till if either of the left or right node is not NULL
then swap the left node with right node.

The or condition here is important.

*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root==NULL){
            return root;
        }
        if(root->left==NULL && root->right==NULL)
        {
            return root;
        }
        invertTree(root->left);
        invertTree(root->right);
        if(root->left!=NULL || root->right!=NULL)
        {
            TreeNode *temp = root->left;
            root->left=root->right;
            root->right=temp;                
        }
        return root;
    }
};