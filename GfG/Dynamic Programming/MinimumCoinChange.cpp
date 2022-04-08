#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*
1) Recursive Approach -> You have an amount x and array = [a0,a1,a2] Now you first check for a0 and then a1 and then a3  and as soon as sum get o you have
one solution. 
draw the recursive tree. 
2) Dp Approach        -> 
*/
int MinimumCoinChangeRecursive(int arr[],int n,int val)
{
	if(val==0)
	{
		return 0;
	}
	int res = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]<=val)
		{
			int subres=MinimumCoinChangeRecursive(arr,n,val-arr[i]);
			if(subres!=INT_MAX)
			{
				res = min(res,subres+1);
			}
		}
	}
	return res;
}
int MinimumCoinChangeDp(int arr[],int n, int val)
{
	int dp[val+1]={INT_MAX};
	dp[0]=0;
	for (int i = 1; i <=val; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(arr[j]<=i)
			{
				int subres = dp[i-arr[j]];
				if(subres!=INT_MAX)
				{
					dp[i] = min(dp[i],subres+1);
				}
			}
		}
	}
	return dp[val];
}

int main(int argc, char const *argv[])
{
	int arr[] ={3,4,1};
	int n= sizeof(arr)/sizeof(arr[0]);
	int x = MinimumCoinChangeDp(arr,n,5);
	cout<<x<<endl;

}
