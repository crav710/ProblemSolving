/*
https://math.stackexchange.com/questions/857424/estimate-or-calculate-the-number-of-digits-of-a-multiplication

*/

// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

int digitsInFactorial(int N)
{
    double numDig=0;
    for(int i =1;i<=N;i++)
    {
        numDig+=log10(i);
    }
    return floor(numDig)+1;
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
        
        //calling method digitsInFactorial()
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends