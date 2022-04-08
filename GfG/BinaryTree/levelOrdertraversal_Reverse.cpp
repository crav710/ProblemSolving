class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
    	std::vector<vector<int>> v;
    	std::vector<int> tempV;
    	queue <TreeNode*> q;
    	stack <TreeNode*> s;
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
    			q.push(NULL);
    			s.push(NULL);
    		}
    		else
    		{
    			s.push(temp);
	    		if(temp->right!= NULL)
	    		{
	    			q.push(temp->right);
	    		}
	    		if(temp->left!=NULL)
	    		{
	    			q.push(temp->left);
	    		}
    		}

    	}
    	while(!s.empty())
    	{
    		TreeNode * temp=s.pop();
    		if (temp==NULL)
    		{
    			v.push_back(tempV);
    			tempV.clear();
    		}
    		else
    		{
    			tempV.push_back(temp->val);
    		}
    	}
        return v;

        
    }
};