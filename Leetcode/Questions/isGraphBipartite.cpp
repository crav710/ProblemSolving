class Solution {
public:

    bool isBipartite(vector<vector<int>>& graph) 
    {
        // USING BFS 
        int n = graph.size();
        vector<int> colour(n,-1);
        
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            if(colour[i]!=-1)
            {
                continue;
            }
            colour[i]=1;
            q.push(i);
            while(!q.empty())
            {
                int curr= q.front();
                q.pop();                
                for(int j=0;j<graph[curr].size();j++){
                    if(colour[graph[curr][j]]==-1){
                        colour[graph[curr][j]]=1-colour[curr];
                        q.push(graph[curr][j]);
                    }
                    else if(colour[curr]==colour[graph[curr][j]]){
                        return false;
                    }
                }
            }
            
        }        
        return true;
    
    }
};