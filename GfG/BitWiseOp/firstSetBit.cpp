// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  function to find position of first set 
    bit in the given number
 * n: given input for which we want to get
      the position of first set bit
 */
 /*
 
return log2(n&-n)+1; 
//Doing AND operation of n and -n. n and -n will have similar bits only till the 
//first set bit starting from the right and differnt bits after the first set bit.
//Then we take log2 of the result to find the position.
//We add 1 to the obtained value so that the count starts from 1 instead of zero.

 
 Best Solution

 n= 26     11010
 n-1=25    11001
 ~(n-1)    00110
 n&~(n-1)  00010
 
 Basically first you unset last bit and then set all 00 next to it.
 next you set again set last bit by negation and unsetting all 1 before it and after it. 
 now you do and to get the only set bit. 
 
 */
unsigned int getFirstSetBit(int n){
    
    // Your code here
    if(n==0)
    {
        return n;
    }
    return log2(n&~(n-1))+1;
}

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        printf("%u\n", getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
  // } Driver Code Ends