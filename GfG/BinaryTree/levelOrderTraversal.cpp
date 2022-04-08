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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
    	std::vector<vector<int>> v;
    	std::vector<int> tempV;
    	queue <TreeNode*> q;
        if(root==NULL)
        {
            return v;
        }
    	q.push(root);
    	q.push(NULL);
        while(q.size()>1)
    	{
    		TreeNode* temp = q.front();
            q.pop();
    		if (temp==NULL)
    		{
    			v.push_back(tempV);
    			tempV.clear();
    			q.push(NULL);
    		}
    		else
    		{
	    		tempV.push_back(temp->val);  
//                cout<<"val :: "<<temp->val<<endl;
	    		if(temp->left!=NULL)
	    		{
	    			q.push(temp->left);
	    		}
	    		if(temp->right!= NULL)
	    		{
	    			q.push(temp->right);
	    		}
    		}

    	}
        v.push_back(tempV);
        return v;



    
};