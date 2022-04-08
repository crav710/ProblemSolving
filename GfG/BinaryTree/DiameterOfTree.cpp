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
At each step you calculate the max so far from (lh+rh+1). 
*/
class Solution {
public:
    int maxH=0;
    int diameterOfBinaryTreeUtil(TreeNode* root)
    {
        
    	if (root == NULL)
    	{
    		return 0;
    	}
    	int lh   = diameterOfBinaryTreeUtil(root->left);
    	int rh   = diameterOfBinaryTreeUtil(root->right);
    	maxH     = max(maxH,lh+rh+1);
    	return 1+ max(lh,rh);
        
        
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        diameterOfBinaryTreeUtil(root);
        return maxH;
    }    // Naive Solution 
    int height(TreeNode * root)
    {
    	if(root==NULL){
    		return 0;
    	}
    	else
    	{
    		return 1+ max(height(root->left),height(root->right));
    	}

    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
    	if (root == NULL)
    	{
    		return 0;
    	}
    	int d1 = 1+ height(root->left) +height(root->right);
    	int d2 = diameterOfBinaryTree(root->left);
    	int d3 = diameterOfBinaryTree(root->right);
    	return max(d1,max(d2,d3));        
    }

};