// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
//User function Template for C++

/*  Function to find the first position with different bits
*   This function returns the position with different bit
*/
/*
Same as last time. first we xor both number to create a mask for all different bit set as 1 and now simply get the rightmost bit again.
*/
int posOfRightMostDiffBit(int m, int n)
{
    
    // Your code here
    int andBit= m^n;
    int nthBit= andBit&~(andBit-1);
    return log2(nthBit)+1;
    
}

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends