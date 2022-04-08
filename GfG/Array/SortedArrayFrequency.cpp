#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*

Basic Adhoc 

*/
void SortedArrayFreq(int arr[],int n)
{
	int curr=arr[0];
	int freq=0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==curr)
		{
			freq++;
		}
		else
		{
			cout<<curr<<" "<<freq<<endl;
			curr=arr[i];
			freq=1;
		}

	}
	cout<<curr<<" "<<freq<<endl;
}
int main(int argc, char const *argv[])
{
	int arr[] ={1};
	int n= sizeof(arr)/sizeof(arr[0]);
	SortedArrayFreq(arr,n);
	
}
