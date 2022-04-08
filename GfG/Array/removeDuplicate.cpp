#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*

Traverse the array keep a counter and fill from start . Since the array is sorted.

*/
int RemoveDuplicate(int arr[],int n)
{
	int size=1;
	for (int i = 1; i < n; ++i)
	{
		if(arr[i]!=arr[size-1])
		{
			arr[size]=arr[i];
			size++;
		}
	}
	return size;

}
int main(int argc, char const *argv[])
{
	int arr[] ={1,2,3,4,4,4,4};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<RemoveDuplicate(arr,n)<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


}
