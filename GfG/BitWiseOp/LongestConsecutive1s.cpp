// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*
There are two ways .
    1) Naïve approach :: simply loop in bits and check consecutive integers O(logn)
    2) Smart approach is to keep doing n&(n<<1) till it become 0 and count the iterations. 
    So basically in each iteration you would be deleting an instance of consecutive set bit. */
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int iters=0;
        while(N>0)
        {
            //This steps
            N=N&(N<<1);
            iters++;
        }
        return iters;
    }
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends