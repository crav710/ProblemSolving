#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*

Have a two pointer approach or recursive approach 

*/
void reverseArray(int arr[],int n)
{

	int start =0,end=n-1;
	while(start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end]   = temp;	
		start++;
		end--;
	}



}
int main(int argc, char const *argv[])
{
	int arr[] ={1,2,4,3,5};
	int n= 5;
	reverseArray(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
