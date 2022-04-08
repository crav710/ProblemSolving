#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*


Use two pointer approach :: O(n) assign first compare with next and then if < condition satisfies then your next becomes first. 

*/
int isArraySorted(int arr[], int n)
{
	int element = arr[0];
	for(int i=1;i<n;i++)
	{
		if(element<=arr[i])
		{
			element=arr[i];
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int arr[] ={1,2,4,3,5};
	int n= 5;
	cout<<isArraySorted(arr,n)<<endl;
}
