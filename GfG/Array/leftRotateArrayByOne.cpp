#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*

swap i,i+1 until n.
*/

void LeftRotateArrayBy_one(int arr[],int n)
{
	for (int i = 1; i < n; ++i)
	{
		swap(arr[i-1],arr[i]);
	}

}
int main(int argc, char const *argv[])
{
	int arr[] ={1,2,3,4,4,4,4};
	int n= sizeof(arr)/sizeof(arr[0]);
	LeftRotateArrayBy_one(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

}
