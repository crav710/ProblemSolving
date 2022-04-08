#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*

To do a linear traversal you should be able to process a0a1..ai. The aith element in constant time. 

*/
void MoveZerosEnd(int arr[],int n)
{
	int count =0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count++;
		}
	}

}
int main(int argc, char const *argv[])
{

	int arr[] ={1,0,3,0,8,0,0};
	int n= sizeof(arr)/sizeof(arr[0]);
	MoveZerosEnd(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
