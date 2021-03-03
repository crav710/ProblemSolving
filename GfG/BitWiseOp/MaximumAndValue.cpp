// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
 
// Simple you check all bits contribution in all elements . if it is contributing more than once well and good if not skip it. 
class Solution
{
    public:
    // Function for finding maximum AND value.
    int maxAND (int arr[], int n)
    {
        int res = 0;
        for(int i =31;i>=0;i--)
        {
            int pattern = res|(1<<i);
            int patternCount=0;
            for(int j=0;j<n;j++)
            {
                if((pattern & arr[j]) == pattern){
                    patternCount++;
                }
            }
//            cout<<patternCount<<" "<<endl;
            if(patternCount>1)
            {
                res=res|(1<<i);
            }
        }
        return res;
    }
};

// { Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;//testcases
    while(t--)
    {
        int n;
        cin>>n;//input n
        int arr[n+5],i;
        
        //inserting elements
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        //calling maxAND() function
        cout <<  obj.maxAND(arr,n)<<endl;
    }
    return 0;
}  // } Driver Code Ends