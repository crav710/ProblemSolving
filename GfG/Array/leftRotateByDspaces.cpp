#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*

swap i,(i+d)%n until n.
*/

void reverseArray(int arr[],int st,int en)
{

	int start =st,end=en;
	while(start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end]   = temp;	
		start++;
		end--;
	}
}
void LeftRotateArrayByD(int arr[],int n,int k)
{
	// First reverse 0,k-1
	// Second reverse k,n
	// Third Reverse whole array 
	reverseArray(arr,0,k-1);
	reverseArray(arr,k,n-1);
	reverseArray(arr,0,n-1);

}
int main(int argc, char const *argv[])
{
	int arr[] ={1,2,3,4,4,4,4};
	int n= sizeof(arr)/sizeof(arr[0]);
	int k = 2;
	LeftRotateArrayByD(arr,n,k);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

}
