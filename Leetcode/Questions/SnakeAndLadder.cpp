#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void getCoordinates(int n,int &row,int &col,int vCor)
    {
        row = n-1-((vCor-1)/n);
        col = (vCor-1)%n; // Normal case column 
        if((row%2==1 && n%2==1)||(row%2==0 && n%2==0)){
            col = n-1-col; // zig zag case column
        }        
    }
    int snakesAndLadders(vector<vector<int>>& board) 
    {
        int n= board.size();
        vector<bool> visited(n*n+1,false);
        queue<pair<int,int>> q; // pair of s and dist
        q.push({1,0});
        visited[1]=true;
        while(!q.empty())
        {
            pair<int,int> qentry = q.front();
            int s=qentry.first;
            int dist = qentry.second;
            int row,col;
            q.pop();
            if(s==n*n){
                return dist; 
            }
            for(int i=1;s+i<=n*n&& i<=6;i++)
            {
                getCoordinates(n,row,col,s+i);
                int vCor = board[row][col]==-1?i+s:board[row][col];
                if(!visited[vCor]){
                    q.push({vCor,dist+1});
                }
            }
            
        }        
        return -1;
        
        
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