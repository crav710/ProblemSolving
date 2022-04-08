#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*
If we know the minimum so far at ith element and max diff so far we can find.

*/
int Maximum_Diff(int arr[],int n)
{
	int mini=arr[0];
	int max_diff=arr[1]-arr[0];
	for (int i = 1; i < n; ++i)
	{

		max_diff=max(max_diff,arr[i]-mini);
		mini=min(arr[i],mini);

	}
	return max_diff;

}
int main(int argc, char const *argv[])
{
	int arr[] ={30,10,8,2};
	int n= sizeof(arr)/sizeof(arr[0]);
	int x = Maximum_Diff(arr,n);
	cout<<x<<endl;

}
