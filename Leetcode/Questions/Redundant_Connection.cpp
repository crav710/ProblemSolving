class Solution {
public:
    bool dfs( vector<vector<int>> &edges,int &v1,int &v2,int V,int parent,vector<bool> &visited)
    {
        visited[V]=true;
        for(int i=0;i<edges[V].size();i++)
        {
            if(!visited[edges[V][i]]){
                if(dfs(edges,v1,v2,edges[V][i],V,visited)==true)
                {
                    v1=V;
                    v2=edges[V][i];
                    return true;
                }
            }
            else if(edges[V][i]!=parent)
            {   
                v1=V;
                v2=edges[V][i];
                return true;                
            }
            
        }
        
        
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges)
    {
           // run dfs for each node
        int v1=-1,v2=-1;
        vector <int> ans;
        ans.push_back(v1);
        ans.push_back(v2);
        vector<bool> visited(edges.size(),false);
        for(int i=0;i<edges.size();i++)
        {
            if(!visited[edges[i]])
            {
                if(dfs(edges,ans[0],ans[1],edges[i],-1,visited)==true)
                {
                    return ans;
                }              
            }            
        }
        return ans;                
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    int matrix [6][6] ={[-1,-1,-1,-1,-1,-1],
                        [-1,-1,-1,-1,-1,-1],
                        [-1,-1,-1,-1,-1,-1],
                        [-1,35,-1,-1,13,-1],
                        [-1,-1,-1,-1,-1,-1],
                        [-1,15,-1,-1,-1,-1]}
                        
    
    return 0;
}