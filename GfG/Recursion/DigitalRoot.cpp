// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function
int singleDigit(int n , int sum)
{
    if(sum+n%10>10)
    {
        return sum;
    }
    singleDigit(n/10,sum+n%10);
    
}
int digitalRoot(int n)
{
    return singleDigit(n,0);

}

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    cout<<digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends