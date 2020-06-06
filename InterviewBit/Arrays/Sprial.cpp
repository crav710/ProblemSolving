#include "bits/stdc++.h"
vector<int> spiralOrder(const vector<vector<int> > &A) 
{
    int rows=A.size();
    int cols=A[0].size();
    int left=0;
    int top=0;
    int right=cols-1;
    int bottom=rows-1;
    int direction=0;
    vector <int> spiral;
    while (top<=bottom && left <=right)
    {
        if (direction==0)
        {
            for (int i=left ; i<=right; i++)
            {
                spiral.push_back(A[top][i]);
            }
            top++;
            direction=1;
            
        }
        else if (direction==1)
        {
            for(int i=top ; i<=bottom;i++)
            {
                
                spiral.push_back(A[i][right]);
            }
            right--;
            direction=2;
        }
        else if (direction==2)
        {
            for(int i=right ; i>=left;i--)
            {
                spiral.push_back(A[bottom][i]);
            }
            bottom--;
            direction=3;
        }
        else if (direction==3)
        {
            for(int i=bottom ; i>=top;i--)
            {
                spiral.push_back(A[i][left]);
            }
            left++;
            direction=0;
        }
    }
    return spiral;
    
}


int main()
{

    std::vector<> v;
    vector <int> Spiral;
    Spiral=spiralOrder()

    return 0;

}