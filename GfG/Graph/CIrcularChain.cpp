// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
#define MCHAR  26
class Solution
{
    public:
    void dfs(vector<int> G[],vector<bool> &visited,int V)
    {

        cout<<"V: "<<V<<endl;
        visited[V]=true;
        for(int i=0;i<G[V].size();i++)
        {
            if(!visited[G[V][i]])
            {
                dfs(G,visited,G[V][i]);
            }
        }
        
    }
    int isSSC(vector<int> G[],vector<bool> &charmap,int v)
    {
        vector<bool> visited(MCHAR,false);
        dfs(G,visited,v);
        for(int i=0;i<MCHAR;i++)
        {
            // check if the vertex is visited or not?
            cout<<visited[i]<<" "<<charmap[i]<<endl;
            if(charmap[i] && !visited[i])
            {
                return 0;
            }
            
        }
        return 1;
    }
    int isCircle(int N, vector<string> A)
    {
        // create a graph for all start and end vertices.
        vector<int> G[MCHAR];
        // Indegree and OutDegree 
        vector<int> IN(MCHAR,0),OUT(MCHAR,0);
        // visited vector 
        vector<bool> charmap(MCHAR,false);
        // add edges for first to last;
        for(int i=0;i<N;i++)
        {
            int first = A[i][0]-'a';
            int last  = A[i][A[i].size()-1] -'a';
            charmap[first]=true;
            charmap[last] = true;
            IN[last]++;
            OUT[first]++;
            
            G[first].push_back(last);
            
        }
        // check if indegree and outdegree are same or not;
        
        for(int i=0;i<MCHAR;i++)
        {
            if(IN[i]!=OUT[i])
            {
                return 0;
            }
        }
        
        // Now check for cycle containing all the vertices.
        
        return isSSC(G,charmap,A[0][0]-'a');
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<string> A;
        string s;
        
        for(int i = 0;i < N; i++)
        {
            cin>>s;
            A.push_back(s);
        }
        
        Solution ob;
        cout<<ob.isCircle(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends