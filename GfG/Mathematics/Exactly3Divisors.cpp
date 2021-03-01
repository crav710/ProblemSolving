// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

bool isPrime(int N)
{
    //Your code here
    if(N==1)
    {
        return false;
    }
    if(N==2 || N==3)
    {
        return true;
    }
    if(N%2==0 || N%3==0)
    {
        return false;
    }
    for(int i = 5;i*i<=N;i=i+6)
    {
        if(N%i==0 || N%(i+2)==0)
        {
            return false;    
        }
        
    }
    return true;
}

int exactly3Divisors(int N)
{
    int countNum=0;
    for(int i=2;i*i<=N;i++)
    {
        int sqr=i*i;
        if(isPrime(i))
        {
            countNum++;
        }
    }
    return countNum;
}

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        
        //calling function exactly3Divisors()
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends