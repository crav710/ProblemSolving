// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to swap odd and even bits
    unsigned int swapBits(unsigned int n)
    {
    	
    	// assuming uint we first find out all even bits and then all odd bits. 
    	// We left shift odd and right shift even and do xor.
    	unsigned int evenBits = n&0xAAAAAAAA;
    	unsigned int oddBits  = n&0x55555555;
    	evenBits=evenBits>>1;
    	oddBits=oddBits<<1;
    	return (evenBits|oddBits);
    	// Your code here
    	
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends

