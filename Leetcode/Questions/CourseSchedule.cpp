class Solution {
public:
    bool dfsCycle(int V,vector<int> graph[],vector<bool> & visited,vector<bool>& recurStk,stack<int> &ans)
    {
        visited[V]=true;
        recurStk[V]=true;
        for(int i=0;i<graph[V].size();i++)
        {
            if(visited[graph[V][i]]==false)
            {
                if(dfsCycle(V,graph,visited,recurStk,ans))
                {
                    return true;
                }
            }
            else if (recurStk[graph[V][i]]==true){
                return true;
            }            
        }
        ans.push(V);
        recurStk[V]=false;
        return false;        
        
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites)
    {
        vector<bool> visited(numCourses,false);
        vector<bool> recurStck(numCourses,false);
        vector<int> graph[numCourses];
        stack<int> S;
        vector<int> res;
        for(int i=0;i<numCourses;i++)
        {
            if(!visited[i])
            {
                if(dfsCycle(i,graph,visited,recurStck,S)==true){
                    return {};
                }
                                                
            }
            
        }
        while(!S.empty())
        {
            res.push_back(S.top());
            S.pop();            
        }
        return res;        
    }
};